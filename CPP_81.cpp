#include <iostream>
using namespace std;

char numerical_letter_grade(int grade) {
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int grade1, grade2;
    cout << "Enter the first student's grade: ";
    cin >> grade1;
    cout << "Enter the second student's grade: ";
    cin >> grade2;

    if (numerical_letter_grade(grade1) == numerical_letter_grade(grade2))
        cout << "The two students have the same letter grade.\n";
    else
        cout << "The two students do not have the same letter grade.\n";

    return 0;
}