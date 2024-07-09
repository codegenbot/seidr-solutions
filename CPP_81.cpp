bool issame(vector<string> a,vector<string>b){
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> grades = {3.5, 4.2, 3.9};
    vector<string> result = numerical_letter_grade(grades);
    vector<string> expected = {"B+", "A", "A"};
    
    if (issame(result, expected)) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}