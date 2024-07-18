#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
    
    return 0;
}