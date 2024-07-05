#include <sstream>

map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    char ch;
    while (ss >> ch) {
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