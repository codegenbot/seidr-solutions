#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> numerical_letter_grade(std::vector<float> grades){
    std::vector<std::string> letter_grades;
    // Implementation as provided in the original code
    return letter_grades;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    // Implementation for issame function
    return a == b;
}

int main(){
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}