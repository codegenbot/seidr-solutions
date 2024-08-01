#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    
    if(result.size() == 1 && result[0].find(',') == string::npos){
        int count = 0;
        for(char c : result[0]){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result[0] = to_string(count);
    }
    
    return result;
}

int main() {
    string input;
    getline(cin, input);
    
    vector<string> output = split_words(input);
    
    for(const auto& word : output){
        cout << word << " ";
    }
    
    return 0;
}