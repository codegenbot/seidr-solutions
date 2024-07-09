bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<float> grades = {4.2,3.9,1.5};
    vector<string> result = numerical_letter_grade(grades);
    for(string s : result){
        cout << s << " ";
    }
    if(issame(result, {"A+","A","D+"})){
        cout << "Same";
    }else{
        cout << "Not Same";
    }
}