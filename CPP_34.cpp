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