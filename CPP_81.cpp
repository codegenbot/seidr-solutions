#include <vector>
#include <string>
#include <initializer_list>

using namespace std;

bool checkSame(vector<string> a) {
    if (a.size() != 1) {
        return false;
    }
    vector<float> grades = {0.0, 0.7};
    vector<string> b = numerical_letter_grade({grades});
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[0]) {
            return false;
        }
    }
    return true;
}

vector<string> numerical_letter_grade(initializer_list<float> grades) {
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
        else if (grade > 0.7)
            result.push_back("D");
        else
            result.push_back("F");
    }
    return result;
}

int main() {
    vector<float> grades = {3.5, 2.8};
    vector<string> result = numerical_letter_grade({grades});
    assert(checkSame(vector<string>(result.begin(), result.end())) == vector<string>{"B", "D"});
    return 0;