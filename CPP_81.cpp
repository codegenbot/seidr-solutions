```cpp
#include <vector>
#include <map>

std::pair<char, std::string> numerical_letter_grade(std::vector<double> grades) {
    static const std::map<double, std::pair<char, std::string>> grade_map = {{90.0, {'A', "A"}}, {80.0, {'A', "B"}}, 
    {70.0, {'A', "C+"}}, {65.0, {'B', "D+"}}, {60.0, {'B', "D-"}}, {0.0, {'F', "F"}}};
    
    for (double grade : grades) {
        if (grade > 90) return {'A', "A"};
        else if (grade > 80) return {'A', "B"};
        else if (grade > 70) return {'A', "C+"};
        else if (grade > 65) return {'B', "D+"};
        else if (grade > 60) return {'B', "D-"};
    }
    
    return {'F', "F"}; // Default grade for empty or all grades below 60
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}