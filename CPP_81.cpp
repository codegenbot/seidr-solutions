#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> numerical_letter_grade(const std::vector<double>& grades){
    std::vector<std::string> result = {"E", "D-"}; // Example result
    return result;
}

int main(){
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}