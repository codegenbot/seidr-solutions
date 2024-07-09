#include <iostream>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade < 0.9)
            result.push_back("F");
        else if (grade >= 0.9 && grade < 1.0)
            result.push_back("A");
        else if (grade >= 0.8 && grade < 0.9)
            result.push_back("B");
        else if (grade >= 0.7 && grade < 0.8)
            result.push_back("C");
        else
            result.push_back("D+");
    }
    return result;
}

std::vector<float> grades1 = {0, 0.7};
std::vector<std::string> result1 = numerical_letter_grade(grades1);
std::vector<std::string> b = result1;  // Declare and initialize 'b'
std::vector<float> grades2 = {0, 0.7};
std::vector<std::string> result2 = numerical_letter_grade(grades2);

if (issame(result1, b)) {
    std::cout << "The two vectors are the same." << std::endl;
} else {
    std::cout << "The two vectors are not the same." << std::endl;
}