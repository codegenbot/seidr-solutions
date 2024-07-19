#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<float> grades = {3.8, 2.5, 4.0, 1.2, 3.4};
    vector<string> expected_result = {"A", "B", "A+", "D", "B-"};
    
    vector<string> result = numerical_letter_grade(grades);
    
    assert(issame(expected_result, result));

    for (const auto& grade : result) {
        cout << grade << " ";
    }
    
    return 0;
}