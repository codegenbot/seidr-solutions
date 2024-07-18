// Include needed headers and specify std namespace
#include <iostream>
#include <sstream>
#include <map>
#include <cassert>
using namespace std;

// Define function prototypes
map<char, int> histogram(string test);
bool issame(map<char, int>& a, map<char, int>& b);

// Implement histogram function
map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream ... 
    return maxChars;
}

// Implement issame function to compare maps
bool issame(map<char, int>& a, map<char, int>& b) {
    return a == b;
}

// Write main function to test the implementation
int main() {
    assert(issame(histogram("a"), {{'a', 1}})); // Test case
    return 0;
}