#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int main() {
    vector<string> lst1 = {"abc", "def", "ghi"};
    vector<string> lst2 = {"jkl", "mno", "pqr"};
    
    vector<string> result = total_match(lst1, lst2);
    
    for(string str : result){
        cout << str << " ";
    }
    
    return 0;
}

bool issame(vector<string> a, vector<string> b){
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for(string str : a){
        totalChars1 += str.length();
    }
    
    for(string str : b){
        totalChars2 += str.length();
    }
    
    if(totalChars1 < totalChars2){
        return true;
    }
    else{
        return false;
    }
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for(string str : lst1){
        totalChars1 += str.length();
    }
    
    for(string str : lst2){
        totalChars2 += str.length();
    }
    
    if(totalChars1 < totalChars2){
        return lst1;
    }
    else{
        return lst2;
    }
}