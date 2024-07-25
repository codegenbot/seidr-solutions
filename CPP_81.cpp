#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    vector<float> grades = {3.5, 2.8, 4.0, 1.9};
    vector<string> letter_grades = numerical_letter_grade(grades);

    return 0;
}