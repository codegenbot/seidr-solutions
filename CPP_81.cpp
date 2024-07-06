```cpp
#include <string>
#include <vector>

char numerical_letter_grade(int grade) {
    if (grade < 0 || grade > 100)
        return ' ';
    else if (grade >= 90) 
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else
        return 'F';
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame({std::string("E"), std::string("D-")}, {numerical_letter_grade(0), numerical_letter_grade(70)}));
}