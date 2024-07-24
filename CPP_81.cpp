```cpp
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
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
    vector<float> grades = {4.0, 2.7};
    vector<string> a = numerical_letter_grade(grades);
    if (a[0] >= "A+")
        a[0] = "A+";
    else if (a[0] > "A")
        a[0] = "A";
    else if (a[0] > "A-")
        a[0] = "A-";
    else if (a[0] > "B+")
        a[0] = "B+";
    else if (a[0] > "B")
        a[0] = "B";
    else if (a[0] > "B-")
        a[0] = "B-";
    else if (a[0] > "C+")
        a[0] = "C+";
    else if (a[0] > "C")
        a[0] = "C";
    else if (a[0] > "C-")
        a[0] = "C-";
    else if (a[0] > "D+")
        a[0] = "D+";
    else
        a[0] = "F";
    vector<string> b(a);
    vector<string> c = {a};
    bool same = issame(c, b);
    return 0;
}