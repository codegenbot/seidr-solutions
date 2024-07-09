#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    return std::all_of(a.begin(), a.end(), [&](const std::string& s){ return s == a[0]; });
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 4.0)
            result.push_back("A+");
        else if (grades[i] > 3.7)
            result.push_back("A");
        else if (grades[i] > 3.3)
            result.push_back("A-");
        else if (grades[i] > 3.0)
            result.push_back("B+");
        else if (grades[i] > 2.7)
            result.push_back("B");
        else if (grades[i] > 2.3)
            result.push_back("B-");
        else if (grades[i] > 2.0)
            result.push_back("C+");
        else if (grades[i] > 1.7)
            result.push_back("C");
        else if (grades[i] > 1.3)
            result.push_back("C-");
        else if (grades[i] > 1.0)
            result.push_back("D+");
        else if (grades[i] > 0.7)
            result.push_back("D");
        else
            result.push_back("E");
    }
    return result;
}

int main() {
    std::vector<float> grades = {4.0};
    std::vector<std::string> result = numerical_letter_grade(grades);
    if (issame({result[0]})) {
        for (std::string s : result) {
            if (s != "E") {
                return 1;
            }
        }
    }
    return 0;
}