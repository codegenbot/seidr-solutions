#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst);

int main() {
    // Input reading and processing
    vector<string> lst;
    string str;
    
    while (cin >> str) {
        lst.push_back(str);
    }

    // Call the function and output result
    vector<string> result = sorted_list_sum(lst);
    
    for (const auto& s : result) {
        cout << s << " ";
    }
    
    return 0;
}

vector<string> sorted_list_sum(vector<string> lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){ return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}