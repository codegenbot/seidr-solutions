#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n, m;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    vector<string> str1(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> str1[i];
    }

    int p;
    std::cout << "Enter the number of strings to check: ";
    std::cin >> p;

    vector<string> str2(p);
    for (int i = 0; i < p; i++) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> str2[i];
    }

    vector<string> same;
    for (string s : str1) {
        if (issame(str1, str2)) {
            same.push_back(s);
        }
    }

    vector<string> result = filter_by_substring(same, "same");

    std::cout << "The strings that are 'same' and contain the substring 'same': ";
    for (string s : result) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

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