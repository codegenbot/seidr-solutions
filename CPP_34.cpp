```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        bool found = false;
        for (int j = 0; j < result.size(); j++) {
            if (l[i] == result[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(l[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
vector<int> result = unique(l);
for (int i : result) {
    cout << i << " ";
}
return 0;