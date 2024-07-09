```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> input;
    string prefix;

    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter a string: ";
        std::string s;
        std::cin >> s;
        input.push_back(s);
    }

    std::cout << "Enter the prefix: ";
    std::cin >> prefix;

    vector<string> output = filter_by_prefix(input, prefix);

    for(const auto& s : output) {
        std::cout << s << "\n";
    }

    return 0;
}