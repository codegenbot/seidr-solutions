```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> words_string(string s){
    vector<string> result;
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }else{
            word += s[i];
        }
    }
    if(!word.empty())
        result.push_back(word);
    return result;
}

int main(){
    string input;
    cout << "Enter your string: ";
    cin >> input;
    vector<string> strings = words_string(input);
    bool same = issame(strings, {"ahmed", "gamal"});
    if(same)
        cout << "Strings are same." << endl;
    else
        cout << "Strings are not same." << endl;
    return 0;
}