bool issame(vector<string> a,vector<string>b){
    return a == b;
}

int main() {
    vector<float> grades = {4.0,3.8,3.5,2.9,1.7};
    vector<string> result = numerical_letter_grade(grades);
    for (string grade : result) {
        if (issame(result, vector<string>({grade}))){
            cout << "All students got the same letter grade: " << grade << endl;
            break;
        }
    }
    return 0;
}