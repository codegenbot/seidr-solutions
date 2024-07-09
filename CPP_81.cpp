bool issame(vector<string> a,vector<string> b){
    for(int i=0;i<a.size()&&!issame(i);i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<float> grades = {3.5, 4.2, 2.8};
    vector<string> result = numerical_letter_grade(grades);
    
    for(string s : result){
        cout<<s<<" ";
    }
    if(issame(result,{"A+ A+ B-" })){
        cout<<endl<<"Grades are same";
    }else{
        cout<<endl<<"Grades are not same";
    }
    return 0;
}