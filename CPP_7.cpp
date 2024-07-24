```cpp
#include <iostream>
#include <vector>
#include <set>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    set<string> setA(a.begin(), a.end());
    set<string> setB(b.begin(), b.end());

    return setA == setB;
}

int main() {
    vector<string> strings = {"apple", "banana", "orange", "kiwi"};
    string substring = "an";
    
    vector<string> result = filter_by_substring(strings, substring);
    
    for(string s : result) {
        std::cout << s << std::endl;
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