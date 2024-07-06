#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

int main() {
    int num_strings;
    std::cin >> num_strings;
    vector<string> input;
    for(int i = 0; i < num_strings; ++i) {
        string s;
        std::cin >> s;
        input.push_back(s);
    }
    
    string prefix_;
    std::cin >> prefix_;

    bool same = issame(input, filter_by_prefix(input,prefix_));
    
    if (same)
        std::cout << "True";
    else
        std::cout << "False";

    return 0;
}