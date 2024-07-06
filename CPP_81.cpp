#include <vector>
#include <string>

double letterGradeToNumerical(int grade){
    if(grade >=90) return 4.0;
    else if(grade >=80) return 3.7;
    else if(grade >=70) return 3.3;
    else if(grade >=60) return 3.0;
    else if(grade >=50) return 2.7;
    else if(grade >=40) return 2.3;
    else if(grade >=33) return 1.7;
    else return 0.0;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(vector<string>({to_string((int)round(letterGradeToNumerical(0.7))), to_string((int)round(letterGradeToNumerical(0.8)))}), {"E", "D-"}));
    // Add more code here...
}