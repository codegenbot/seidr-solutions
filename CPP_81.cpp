
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to check if two strings are the same
bool issame(string a, string b) {
    return (a == b);
}

int main() {
    // Get input from user
    vector<float> grades;
    cout << "Enter your grades: ";
    float grade;
    while (cin >> grade) {
        grades.push_back(grade);
    }
    
    // Call the function to convert numerical grades to letter grades
    vector<string> letter_grades = numerical_letter_grade(grades);
    
    // Print the letter grades
    cout << "Your letter grades are: ";
    for (int i = 0; i < letter_grades.size(); i++) {
        cout << letter_grades[i] << " ";
    }
    cout << endl;
    
    return 0;
}

// Function to convert numerical grades to letter grades
vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 4.0) {
            letter_grades.push_back("A+");
        } else if (grades[i] >= 3.7 && grades[i] < 4.0) {
            letter_grades.push_back("A");
        } else if (grades[i] >= 3.3 && grades[i] < 3.7) {
            letter_grades.push_back("A-");
        } else if (grades[i] >= 3.0 && grades[i] < 3.3) {
            letter_grades.push_back("B+");
        } else if (grades[i] >= 2.7 && grades[i] < 3.0) {
            letter_grades.push_back("B");
        } else if (grades[i] >= 2.3 && grades[i] < 2.7) {
            letter_grades.push_back("B-");
        } else if (grades[i] >= 2.0 && grades[i] < 2.3) {
            letter_grades.push_back("C+");
        } else if (grades[i] >= 1.7 && grades[i] < 2.0) {
            letter_grades.push_back("C");
        } else if (grades[i] >= 1.3 && grades[i] < 1.7) {
            letter_grades.push_back("C-");
        } else if (grades[i] >= 1.0 && grades[i] < 1.3) {
            letter_grades.push_back("D+");
        } else if (grades[i] >= 0.7 && grades[i] < 1.0) {
            letter_grades.push_back("D");
        } else if (grades[i] >= 0.0 && grades[i] < 0.7) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    
    return letter_grades;
}