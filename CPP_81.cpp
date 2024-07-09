#include <vector>
#include <string>
#include <algorithm>
#include <initializer_list>

using namespace std;

bool issame(vector<string> a) {
    return all_of(a.begin(), a.end(), [&](const string& s) { return s == a[0]; });
}

vector<string> numerical_letter_grade(initializer_list<float> grades) {
    vector<string> result;
    for (float grade : grades) {
        if (grade >= 4.0)
            result.push_back("A+");
        else if (grade > 3.7 || grade >= 4.0)
            result.push_back("A");
        else if (grade > 3.3 || grade > 3.7)
            result.push_back("A-");
        else if (grade > 3.0 || grade > 3.3)
            result.push_back("B+");
        else if (grade > 2.7 || grade > 3.0)
            result.push_back("B");
        else if (grade > 2.3 || grade > 2.7)
            result.push_back("B-");
        else if (grade > 2.0 || grade > 2.3)
            result.push_back("C+");
        else if (grade > 1.7 || grade > 2.0)
            result.push_back("C");
        else if (grade > 1.3 || grade > 1.7)
            result.push_back("C-");
        else if (grade > 1.0 || grade > 1.3)
            result.push_back("D+");
        else if (grade > 0.7 || grade > 1.0)
            result.push_back("D");
        else
            result.push_back("E");
    }
    return result;
}

int main() {
    vector<float> grades = {4.0};
    vector<string> result = numerical_letter_grade({grades[0]});
    if (issame({result[0]})) {
        for (string s : result) {
            if (s != "E") {
                return 1;
            }
        }
    }
    return 0;
}