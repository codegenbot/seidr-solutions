```cpp
int main() {
    vector<float> grades(2);
    for (int i = 0; i < 2; i++) {
        cout << "Enter grade " << i+1 << ": ";
        cin >> grades[i];
    }
    vector<string> letter_grades = numerical_letter_grade(grades);
    for (string s : letter_grades) {
        cout << s << endl;
    }
    return 0;
}