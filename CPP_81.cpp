bool issame(vector<string> a,vector<string>b){
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    vector<float> grades = {3.5, 4.2, 1.8};
    vector<string> result = numerical_letter_grade(grades);
    
    for(string s : result) {
        if (issame(result, vector<string>(1, s))) {
            cout << "All students in the same grade: " << s << endl;
            break;
        }
    }
    
    return 0;
}