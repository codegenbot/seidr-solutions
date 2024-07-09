#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkResults(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<string> grades) {
    vector<string> result;
    for (string grade : grades) {
        float f = stof(grade);
        if (f < 0.9)
            result.push_back("F");
        else if (f >= 0.9 && f < 1.0)
            result.push_back("A");
        else if (f >= 0.8 && f < 0.9)
            result.push_back("B");
        else if (f >= 0.7 && f < 0.8)
            result.push_back("C");
        else
            result.push_back("D+");
    }
    return result;
}

int main() {
    vector<string> grades1 = {"0.0", "0.7"};
    vector<string> result1 = numerical_letter_grade(grades1);
    
    if (checkResults(vector<string>{result1[0], result1[1]}, vector<string>{"F", "D+"})) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are not the same." << endl;
    }
}