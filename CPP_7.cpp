#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        auto filter_by_substring = [a[i], &b](const string& s) -> bool {
            size_t found = s.find(a[i]);
            return (found != string::npos);
        };
        vector<string> temp;
        for(string str : b) 
            if(filter_by_substring(str))
                temp.push_back(str);
        a[i] = temp.size() > 0 ? "true" : "false";
    }
    return a == b;
}

int main() {
    vector<string> v1 {"a", "b", "c"};
    vector<string> v2 {"a", "b", "d"};
    cout << issame(v1, v2) << endl; 
    return 0;
}