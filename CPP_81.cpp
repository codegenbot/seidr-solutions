```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    if(a.size() == 0) return true;
    for(int i = 1; i < a.size(); i++) {
        if(a[i] != a[0]) return false;
    }
    return true;
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
    using namespace std;
    vector<float> grades = {0, 0.7};
    vector<string> result = numerical_letter_grade(grades);
    assert(issame(vector<string>(result.begin(), result.end())));
    return 0;
}