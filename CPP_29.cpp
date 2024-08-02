#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    int n;
    std::cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    string prefix;
    cin >> prefix;

    vector<string> result = filter_by_prefix(strings, prefix);

    if(issame({prefix}, {strings[0]})) {
        cout << "The first string is the same as the prefix." << endl;
    } else {
        cout << "The first string is not the same as the prefix." << endl;

        vector<string> unique_strings;
        for(string s : result) {
            if(find(unique_strings.begin(), unique_strings.end(), s) == unique_strings.end())
                unique_strings.push_back(s);
        }

        cout << "Unique strings: ";
        for(string s : unique_strings)
            cout << s << " ";
        cout << endl;
    }

    return 0;
}