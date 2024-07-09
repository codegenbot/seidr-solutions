int main() {
    vector<string> grades1 = {"0.0", "0.7"};
    vector<string> result1 = numerical_letter_grade(grades1);
    
    if (checkResults({result1[0], result1[1]}, {"F", "D+"})) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are not the same." << endl;
    }
}