```cpp
#include <iostream>
#include <vector>
#include <string>

bool containSameStrings(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const string& s) { 
        return find(b.begin(), b.end(), s) != b.end(); 
    });
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    
    vector<string> output = filter_by_substring(input, substring);

    bool sameStrings = containSameStrings(output, {"grunt", "prune"});

    if(sameStrings) {
        std::cout << "The vectors contain the same strings." << std::endl;
    } else {
        std::cout << "The vectors do not contain the same strings." << std::endl;
    }

    return 0;
}