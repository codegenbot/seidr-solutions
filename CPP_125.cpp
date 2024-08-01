
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

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    vector<string> input1, input2;
    string line;

    getline(cin, line);
    input1 = split_words(line);

    getline(cin, line);
    input2 = split_words(line);

    cout << (issame(input1, input2) ? "true" : "false") << endl;

    return 0;
}