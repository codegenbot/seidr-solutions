#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float g : grades) {
        if (g < 0.9)
            result.push_back("D-");
        else
            result.push_back("E");
    }
    return result;
}

int main() {
    std::vector<float> grades = {0.0, 0.7};
    std::vector<string> result = numerical_letter_grade({0.0, 0.7});
    assert(result == {"D-", "D-"});

    return 0;
}