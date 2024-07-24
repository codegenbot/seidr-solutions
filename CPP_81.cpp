```cpp
#include <vector>
#include <string>
#include <cassert>
#include <initializer_list>

using namespace std;

bool issame(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
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
        else
            result.push_back("F");
    }
    return result;
}

int main_test() {
    std::vector<float> grades = {4.0, 2.7};
    std::vector<string> a = numerical_letter_grade(grades);
    if (a[0] == "A+")
        a[0] = "A+";
    else if (a[0] > "A" && a[0] <= "A-")
        a[0] = "A-";
    else if (a[0] > "B+" && a[0] <= "A")
        a[0] = "A";
    else if (a[0] > "B+" && a[0] <= "B-")
        a[0] = "B-";
    else if (a[0] > "C+" && a[0] <= "B")
        a[0] = "B";
    else if (a[0] > "C+" && a[0] <= "C-")
        a[0] = "C-";
    else if (a[0] > "D+" && a[0] <= "C+")
        a[0] = "C+";
    else if (a[0] > "D+" && a[0] <= "D-")
        a[0] = "D-";
    else
        a[0] = "F";
    std::vector<string> b(a);
    assert(issame(numerical_letter_grade({4.0, 2.7}), {"A+", "D-"}) );
    return 0;
}