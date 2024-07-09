```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
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

using namespace std;

int main() {
    assert(issame(vector<string>({{"E", "D-"}}), {"E", "D-"}));
}