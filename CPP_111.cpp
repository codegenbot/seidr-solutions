#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
#include <cassert>

using namespace std;

// Function to compute the histogram of characters.
map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char ch : word) {
            freq[ch]++;
        }
    }
    
    int max_count = 0;
    for (const auto& p : freq) {
        max_count = max(max_count, p.second);
    }
    
    map<char, int> result;
    for (const auto& p : freq) {
        if (p.second == max_count) {
            result[p.first] = p.second;
        }
    }
    
    return result;
}

// Function to compare two maps for equality.
bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    // Test case
    assert(issame(histogram("a"), {{'a', 1}}));
    cout << "All tests passed!" << endl;
    return 0;
}