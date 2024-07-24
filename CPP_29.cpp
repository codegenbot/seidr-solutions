```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str: strings){
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    string prefix;
    cin >> prefix;

    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    if(filtered_strings.size() > 1) {
        bool is_same = issame(filtered_strings.begin(), filtered_strings.end());
        if(is_same)
            cout << "All filtered strings are the same.\n";
        else
            cout << "Not all filtered strings are the same.\n";
    } else {
        cout << "There's only one string in the result.\n";
    }

    return 0;
}