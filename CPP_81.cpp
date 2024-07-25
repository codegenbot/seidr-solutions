#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

int main(){
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}