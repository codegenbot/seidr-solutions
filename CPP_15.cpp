#include <string>
#include <iostream>
#include <cassert>

using namespace std;

string string_sequence(int n) {
    string result;
    for (int i = 0; i <= n; ++i) {
        result += to_string(i) + " ";
    }
    result.pop_back(); // Remove the extra space at the end
    return result;
}

string string_sequence_reversed(int n) {
    string result;
    for (int i = n; i >= 0; --i) {
        result += to_string(i) + " ";
    }
    result.pop_back(); // Remove the extra space at the end
    return result;
}