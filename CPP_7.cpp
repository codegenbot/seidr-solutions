#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main(){
    vector<string> words = {"apple", "banana", "grape", "orange", "kiwi"};
    string sub = "ap";
    
    vector<string> filtered_words = filter_by_substring(words, sub);
    
    for(const string& word : filtered_words){
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}