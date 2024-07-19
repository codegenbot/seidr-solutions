#include <iostream>
#include <map>

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
    map<char, int> test1 = histogram("test case");
    map<char, int> test2 = histogram("another test");
    
    for (const auto& pair : test1) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    for (const auto& pair : test2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}