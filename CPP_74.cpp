#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b);

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

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<string> list1 = {"apple", "banana", "orange"};
    vector<string> list2 = {"apple", "banana", "orange"};
    
    if(issame(list1, list2)){
        cout << "The lists are the same" << endl;
    }
    else{
        cout << "The lists are different" << endl;
    }
    
    vector<string> result = total_match(list1, list2);
    
    cout << "The list with the most characters is: ";
    for(string str : result){
        cout << str << " ";
    }
    
    return 0;
}