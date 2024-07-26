#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> select_words(string s, int n) {
    // Your existing function implementation
}

int main() {
    vector<string> result = select_words("a b c d e f", 1);
    
    cout << (result == vector<string>{"b", "c", "d", "f"});
    
    return 0;
}