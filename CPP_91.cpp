#include<string>
#include<iostream>
using namespace std;

int is_bored(string S){
    int boredom_count = 0;
    bool is_boredom = false;
    
    for(size_t i = 0; i < S.size(); ++i){
        if(i == 0 && S[i] == 'I'){
            is_boredom = true;
        }
        else if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(is_boredom){
                boredom_count++;
            }
            is_boredom = false;
        }
    }
    
    return boredom_count;
}

int main() {
    string sentence;
    cout << "Enter a string of words: ";
    getline(cin, sentence);

    int result = is_bored(sentence);
    cout << result << endl;

    return 0;
}