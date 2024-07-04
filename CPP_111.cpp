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
    for (const auto& pair : freq) {
        max_count = max(max_count, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}