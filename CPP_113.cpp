#include <cassert>

int odd_count(const std::initializer_list<std::string>& strings){
    // your implementation to count odd elements in strings
}

bool issame(int result, const std::initializer_list<std::string>& expected_output){
    // your implementation to compare result with expected_output
}

void test_issame(){
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 3 in the string 314 of the input."
    }));
}

int main(){
    test_issame();
    return 0;
}