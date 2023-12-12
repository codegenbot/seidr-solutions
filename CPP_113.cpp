```
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] % 2 == 1) {
                count++;
            }
        }
        result.push_back("the number of odd elements in the string " + to_string(count) + " of the input.");
    }
    return result;
}
```