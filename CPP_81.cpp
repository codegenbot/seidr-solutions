bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

int main(){
    vector<float> grades1 = {0, 0.7};
    vector<string> result1 = numerical_letter_grade(grades1);
    vector<float> grades2 = {0, 0.7};
    vector<string> result2 = numerical_letter_grade(grades2);

    if (issame(result1, result2)) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are not the same." << endl;
    }
    return 0;
}