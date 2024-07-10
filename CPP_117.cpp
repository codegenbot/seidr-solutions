#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n);

int main() {
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "f"});
    return 0;
}

vector<string> select_words(string s, int n) {
    // Implement your logic to extract words at odd positions
}