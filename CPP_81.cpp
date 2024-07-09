bool issame(vector<string> a,vector<string>b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    vector<float> grades = {4.0,3.8,3.5,2.9,1.8};
    vector<string> result = numerical_letter_grade(grades);
    
    for(auto grade : result){
        if(issame({grade}, {"A+"})){
            cout << "A+";
        }
        else if(issame({grade}, {"A"})){
            cout << "A";
        }
        else if(issame({grade}, {"A-" })){
            cout << "A-";
        }
        else if(issame({grade}, {"B+"})){
            cout << "B+";
        }
        else if(issame({grade}, {"B"})){
            cout << "B";
        }
        else if(issame({grade}, {"B-" })){
            cout << "B-";
        }
        else if(issame({grade}, {"C+"})){
            cout << "C+";
        }
        else if(issame({grade}, {"C"})){
            cout << "C";
        }
        else if(issame({grade}, {"C-" })){
            cout << "C-";
        }
        else if(issame({grade}, {"D+"})){
            cout << "D+";
        }
        else if(issame({grade}, {"D"})){
            cout << "D";
        }
        else{
            cout << "E";
        }
    }
    return 0;
}