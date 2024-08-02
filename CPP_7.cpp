```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    vector<string> strings(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, strings[i]);
    }

    string substring;
    std::cout << "Enter the substring: ";
    std::getline(std::cin, substring);

    vector<string> result = filter_by_substring(strings, substring);
    if(result.empty()) {
        cout << "No strings contain the substring." << endl;
    } else {
        for(string s : result) {
            cout << s << endl;
        }
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}