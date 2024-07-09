bool issame(vector<string> a,vector<string>b){
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> grades = {4.2, 3.8, 3.5, 2.9};
    vector<string> result = numerical_letter_grade(grades);
    
    for (string grade : result) {
        if (!issame(vector<string>(1, "A+"), vector<string>(1, grade))) {
            cout << "The letter grade is: " << grade << endl;
        }
    }
    return 0;
}