#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<float> grades = {3.6, 4.0, 2.9};
    vector<string> expected_result = {"A-", "A+", "B"};
    
    vector<string> result = numerical_letter_grade(grades);
    
    assert(issame(result, expected_result));
    
    for (const auto& grade : result) {
        cout << grade << " ";
    }
    
    return 0;
}