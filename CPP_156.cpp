#include <cassert>
#include <string>

std::string int_to_mini_roman(int num){
    // Implement the conversion logic here
}

int main(){
    assert(int_to_mini_roman(1000) == "m");
    assert(int_to_mini_roman(3999) == "mmmcmxcix");
    assert(int_to_mini_roman(49) == "xlix");
    // Additional test cases
    assert(int_to_mini_roman(139) == "cxxxix");
    assert(int_to_mini_mini_roman(726) == "dccxxvi");
    assert(int_to_mini_roman(2021) == "mmxxi");

    return 0;
}