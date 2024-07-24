#include <iostream>
#include <vector>
using namespace std;

bool issame(float g1, float g2) {
    if (abs(g1 - g2) <= 0.00001)
        return true;
    else
        return false;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float g : grades) {
        string letter;
        if (g > 4.0) g = 4.0; // cap at 4.0
        if (g >= 3.7) {letter = "A"; g -= 3.7;}
        else if (g >= 3.3) {letter = "A-"; g -= 3.3;}
        else if (g >= 3.0) {letter = "B+"; g -= 3.0;}
        else if (g >= 2.7) {letter = "B"; g -= 2.7;}
        else if (g >= 2.3) {letter = "B-"; g -= 2.3;}
        else if (g >= 2.0) {letter = "C+"; g -= 2.0;}
        else if (g >= 1.7) {letter = "C"; g -= 1.7;}
        else if (g >= 1.3) {letter = "C-"; g -= 1.3;}
        else if (g >= 1.0) {letter = "D+"; g -= 1.0;}
        else if (g >= 0.7) {letter = "D"; g -= 0.7;}
        else letter = "F";
        if (g > 0.0) letter += "+";
        letter_grades.push_back(letter);
    }
    return letter_grades;
}

int main() {
    vector<float> grades = {3.5, 4.2, 2.9};
    vector<string> result = numerical_letter_grade(grades);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}