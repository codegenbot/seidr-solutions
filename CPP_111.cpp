#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<char, int> histogram(string test);

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    string test1 = "hello world";
    map<char, int> result1 = histogram(test1);
    for (const auto& pair : result1) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    string test2 = "cpp contest";
    map<char, int> result2 = histogram(test2);
    for (const auto& pair : result2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}