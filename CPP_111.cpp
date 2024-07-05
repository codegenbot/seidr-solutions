#include <sstream>
#include <algorithm>

map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    string letter;
    while (ss >> letter) {
        freq[letter[0]]++;
    }

    int max_count = 0;
    for (const auto& [key, value] : freq) {
        max_count = max(max_count, value);
    }

    map<char, int> result;
    for (const auto& [key, value] : freq) {
        if (value == max_count) {
            result[key] = value;
        }
    }

    return result;
}