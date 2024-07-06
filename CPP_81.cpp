```cpp
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<double> grades) {
    std::vector<std::string> result;
    for (double grade : grades) {
        if (grade >= 3.7)
            result.push_back("A");
        else if (grade >= 3.0)
            result.push_back("B+");
        else if (grade >= 2.7)
            result.push_back("B");
        else if (grade >= 2.3)
            result.push_back("C+");
        else if (grade >= 2.0)
            result.push_back("C");
        else if (grade >= 1.7)
            result.push_back("D");
        else
            result.push_back("F");
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-" }));
    return 0;
}