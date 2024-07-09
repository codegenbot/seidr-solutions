bool issame(vector<string> a,vector<string>b){
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> grades = {4.2,3.9,3.5,3.1,2.8};
    vector<string> result = numerical_letter_grade(grades);
    vector<string> expected_result = {"A+","A","A-","B+","B"};
    if (issame(result,expected_result)) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test failed." << endl;
    }
    return 0;
}