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

bool std::operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main2() {
    std::vector<double> input;
    int n;
    std::cout << "Enter the number of grades: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        double grade;
        std::cout << "Enter grade " << i+1 << ": ";
        std::cin >> grade;
        input.push_back(grade);
    }
    
    std::vector<std::string> result1 = numerical_letter_grade(input);
    
    for (int i = 0; i < n; i++) {
        if (result1[i] == "F")
            std::cout << "Student " << i+1 << " failed." << std::endl;
        else
            std::cout << "Student " << i+1 << " passed with grade " << result1[i] << "." << std::endl;
    }
}