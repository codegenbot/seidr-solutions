```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> b, std::vector<std::string> a){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 4.0)
            result.push_back("A+");
        else if (grade > 3.7)
            result.push_back("A");
        else if (grade > 3.3)
            result.push_back("A-");
        else if (grade > 3.0)
            result.push_back("B+");
        else if (grade > 2.7)
            result.push_back("B");
        else if (grade > 2.3)
            result.push_back("B-");
        else if (grade > 2.0)
            result.push_back("C+");
        else if (grade > 1.7)
            result.push_back("C");
        else if (grade > 1.3)
            result.push_back("C-");
        else if (grade > 1.0)
            result.push_back("D+");
        else if (grade > 0.7)
            result.push_back("D");
        else if (grade >= 0.0)
            result.push_back("D-");
        else
            result.push_back("F");
    }
    return result;
}

int main() {
    std::vector<float> grades = {3.8, 2.9, 4.1};
    for (const auto &grade : numerical_letter_grade(grades)) {
        std::cout << grade << " ";
    }
    return 0;
}