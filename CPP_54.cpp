#include <string>
#include <unordered_map>
using namespace std;

bool same_chars(string s0, string s1) {
    if (s0.length() != s1.length()) return false;
    unordered_map<char, int> freq0, freq1;
    for (char c : s0) freq0[c]++;
    for (char c : s1) freq1[c]++;
    return freq0 == freq1;
}