#include <algorithm>
#include <cassert>

bool issame(unordered_map<char, int> a, unordered_map<char, int> b);

unordered_map<char, int> histogram(string test);

bool issame(unordered_map<char, int> a, unordered_map<char, int> b) {
    return a == b;
}