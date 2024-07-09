#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
    for (float grade : grades) {
        if (grade < 0.9)
            result.push_back("F");
        else if (grade >= 0.9 && grade < 1.0)
            result.push_back("A");
        else if (grade >= 0.8 && grade < 0.9)
            result.push_back("B");
        else if (grade >= 0.7 && grade < 0.8)
            result.push_back("C");
        else
            result.push_back("D+");
    }
    return result;
}

vector<float> grades1 = {0, 0.7};
vector<string> result1 = numerical_letter_grade(grades1);
vector<string> b = result1;  
vector<float> grades2 = {0, 0.7};
vector<string> result2 = numerical_letter_grade(grades2);

if (issame(result1, b)) {
    cout << "The two vectors are the same." << endl;
} else {
    cout << "The two vectors are not the same." << endl;
}