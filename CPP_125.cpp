#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<string> a, std::vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> split_words(string txt);

int main() {
    // Your main function code here
    return 0;
}