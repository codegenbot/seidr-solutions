#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(const std::vector<double>& grades) {
    std::vector<std::string> result;
    for (double grade : grades) {
        if (grade >= 0.9)
            result.push_back("A");
        else if (grade >= 0.8)
            result.push_back("B");
        else if (grade >= 0.7)
            result.push_back("C");
        else if (grade >= 0.6)
            result.push_back("D");
        else
            result.push_back("F");
    }
    return result;
}

bool issame(const std::vector<std::string>& input1, const std::vector<std::string>& input2) {
    if (input1.size() != input2.size())
        return false;
    for (int i = 0; i < input1.size(); i++) {
        if (input1[i] != input2[i])
            return false;
    }
    return true;
}

int main2() {
    std::vector<double> input = {0.0, 0.7};
    std::vector<std::string> result1 = numerical_letter_grade(input);
    
    std::vector<std::string> input2 = {"F", "C"};
    if (issame(result1, input2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
}