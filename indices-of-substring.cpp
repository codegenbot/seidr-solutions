#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == target[0]) {
            bool match = true;
            for (size_t j = 1; j < target.length(); ++j) {
                if (text[i + j] != target[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                indices.push_back(i);
            }
        }
    }
    return indices;
}