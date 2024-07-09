#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(const std::vector<double>& grades) {
    std::vector<std::string> result;
    for (double grade : grades) {
        if (grade >= 4.0)
            result.push_back("A");
        else if (grade >= 3.7)
            result.push_back("B+");
        else if (grade >= 3.3)
            result.push_back("B");
        else if (grade >= 3.0)
            result.push_back("C+");
        else if (grade >= 2.7)
            result.push_back("C");
        else if (grade >= 2.3)
            result.push_back("D+");
        else
            result.push_back("F");
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main2() {
    std::vector<double> input = {0.0, 0.7};
    std::vector<std::string> result1 = numerical_letter_grade(input);
    
    std::vector<std::string> result2 = {"F", "D+"};
    if (issame({"F", result1[1]}, result2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
}