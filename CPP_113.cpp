#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2n the str271ng 271 of the 271nput.",
        "the number of odd elements 3n the str137ng 137 of the 137nput.",
        "the number of odd elements 2n the str314ng 314 of the 314nput."
    }));
}