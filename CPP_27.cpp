#include <iostream>
#include <cassert>
#include <algorithm>

std::string filp_case(std::string input_string) {
    std::transform(input_string.begin(), input_string.end(), input_string.begin(),
                   [](unsigned char c){ return std::toupper(c) ^ 32; });
    return input_string;
}

int main(){
    assert (filp_case("These violent delights have violent ends") == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}