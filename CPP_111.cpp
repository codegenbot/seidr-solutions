#include <map>
#include <string>
#include <cassert>

using namespace std;

map<char, int> histogram(const string& test) {
    map<char, int> freq;
    for (char ch : test) {
        freq[ch]++;
    }

    int max_count = 0;
    for (const auto &entry : freq) {
        if (entry.second > max_count) {
            max_count = entry.second;
        }
    }

    map<char, int> result;
    for (const auto &entry : freq) {
        if (entry.second == max_count) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases as needed
    return 0;
}