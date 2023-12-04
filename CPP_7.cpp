```
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered;
    for (int i = 0; i < strings.size(); i++) {
        if (strings[i].find(substring) != string::npos) {
            filtered.push_back(strings[i]);
        }
    }
    return filtered;
}
```