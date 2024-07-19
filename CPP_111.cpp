#include <iostream>
#include <map>
#include <sstream>

map<char,int> histogram(string test);

bool issame(const map<char,int>& a, const map<char,int>& b);

map<char,int> histogram(string test){
    map<char,int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }
    map<char,int> mostRepeated;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            mostRepeated[entry.first] = entry.second;
        }
    }
    return mostRepeated;
}

bool issame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}

int main() {
    string test = "apple banana orange apple";
    map<char,int> result = histogram(test);
    for (const auto& entry : result) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}