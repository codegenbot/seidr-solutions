#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(const std::vector<std::string>& grades) {
    std::vector<std::string> result;
    for (const auto& grade : grades) {
        double numGrade = stod(grade);
        if (numGrade >= 0.9)
            result.push_back("A");
        else if (numGrade >= 0.8)
            result.push_back("B");
        else if (numGrade >= 0.7)
            result.push_back("C+");
        else if (numGrade >= 0.6)
            result.push_back("C");
        else if (numGrade >= 0.5)
            result.push_back("D");
        else
            result.push_back("F");
    }
    return result;
}

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); ++i)
        if (v1[i] != v2[i])
            return false;
    return true;
}

int main() {
    std::vector<std::string> grades1 = {"0.0", "0.7"};
    std::vector<std::string> result1 = numerical_letter_grade(grades1);
    
    if (issame({result1[0], result1[1]}, {"F", "D+"})) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
}