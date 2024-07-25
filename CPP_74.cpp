#include <string>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    int total_chars1 = 0;
    int total_chars2 = 0;
    
    for (string str : a) {
        total_chars1 += str.length();
    }
    
    for (string str : b) {
        total_chars2 += str.length();
    }
    
    return total_chars1 == total_chars2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    
    return 0;
}