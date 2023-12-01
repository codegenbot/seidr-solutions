#include <iostream>
#include <string>
#include <vector>
#include <cassert>  // 1. Include the <cassert> header

using namespace std;

string concatenate(vector<string> strings) {
    string result = "";
    for (int i = 0; i < strings.size(); i++) {
        result += strings[i];
    }
    return result;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");  // 2. Remove duplicate main function
    return 0;
}