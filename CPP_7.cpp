```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> strings;
    std::string substring;

    // Read input from user
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, s);
        strings.push_back(s);
    }

    std::cout << "Enter the substring: ";
    std::getline(std::cin, substring);

    // Filter by substring
    vector<string> result = filter_by_substring(strings, substring);

    // Check if all filtered strings are same
    if(result.size() > 0) {
        for(int i = 1; i < result.size(); i++) {
            if(!issame(vector<string>(1,result[i-1]), vector<string>(1,result[i])))
                break;
            if(i == result.size() - 1)
                std::cout << "All filtered strings are same: " << result[0] << std::endl;
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