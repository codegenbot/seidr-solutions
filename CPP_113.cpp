#include <cassert>

int main() {
    vector<string> expected = {"the number of odd elements 2\n the string 137 of the input.", 
                                "the number of odd elements 2\n the string 271 of the input.", 
                                "the number of odd elements 4\n the string 314 of the input."};

    assert(odd_count({"271", "137", "314"}) == expected);
    return 0;
}