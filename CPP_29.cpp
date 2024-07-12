```
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string>& b) {
    vector<string> temp;
    for (string s : b) {
        if (s.find("same") == 0 || s.find(" Same") == 0 || s.find(" same") == 0) {
            temp.push_back(s);
        }
    }
    return !temp.empty();
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}