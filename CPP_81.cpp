```cpp
#include <vector>
#include <string>

double letterToGrade(char grade) {
    if(grade == 'A') return 4.0;
    else if(grade == 'B') return 3.0;
    else if(grade == 'C') return 2.0;
    else if(grade == 'D') return 1.0;
    else return 0.0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        double grade = letterToGrade(b[i][0]);
        if(std::abs(grade - letterToGrade(a[i][0])) > 1.5) return false;
    }
    return true;
}
int main() {
    assert(issame({0, 0.7}, {"E", "D-" }));
    return 0;
}