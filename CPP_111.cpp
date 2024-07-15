#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        freq[c]++;
    }
    return freq;
}