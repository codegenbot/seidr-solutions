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

bool std::vector<std::string>::operator==(const std::vector<std::string>& b) {
    if (size() != b.size())
        return false;
    for (int i = 0; i < size(); i++) {
        if (at(i) != b.at(i))
            return false;
    }
    return true;
}

int main() {
    std::vector<std::string> result1 = numerical_letter_grade({0.0, 0.7});
    
    if (result1 == {"F", "D"}) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
}