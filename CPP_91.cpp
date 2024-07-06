```cpp
int is_bored(string S){
    int count = 0;
    string word;
    for(int i=0; i<S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(word.substr(0,2)=="I ") count++;
            word.clear();
        }else{
            word += S[i];
        }
    }
    return count;
}

int main(){
    string input;
    cout << "Enter a sentence: ";
    cin >> input;
    cout << "The number of times the phrase 'I am' appears is: " << is_bored(input) << endl;
    return 0;
}