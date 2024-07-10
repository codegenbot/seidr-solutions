#include <map>
#include <unordered_map>

unordered_map<char, int> histogram(string test);

unordered_map<char, int> histogram(string test) {
    unordered_map<char, int> freq;
    for (char c : test) {
        if (isalpha(c)) {
            freq[c]++;
        }
    }

    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }

    unordered_map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}