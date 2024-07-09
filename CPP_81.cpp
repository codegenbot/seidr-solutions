bool issame(vector<string> a, vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<float> grades = {3.5, 4.2, 3.8, 2.9};
    vector<string> result = numerical_letter_grade(grades);
    
    for(string s : result) cout << s << endl;
    
    if(result.size() > 0 && issame({"A+","A+","A","B-" },result)) {
        cout << "The grades are same as the expected ones." << endl;
    } else {
        cout << "The grades are not same as the expected ones." << endl;
    }
    
    return 0;
}