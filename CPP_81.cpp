#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
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

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

int main(){
    std::vector<float> grades1 = {0, 0.7};
    std::vector<string> result1 = numerical_letter_grade(grades1);
    std::vector<float> grades2 = {0, 0.7};
    std::vector<string> result2 = numerical_letter_grade(grades2);

    if (issame(result1, result2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}