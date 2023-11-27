#include <string>

int is_bored(string S){
    int boredomCount = 0;
    bool isPreviousI = false;

    for(int i=0; i<S.length(); i++){
        if(S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')){
            isPreviousI = true;
        }
        else if((S[i] == '.' || S[i] == '?' || S[i] == '!') && isPreviousI){
            boredomCount++;
            isPreviousI = false;
        }
    }

    return boredomCount;
}

int main() {
    string input;
    cin >> input;
    int result = is_bored(input);
    cout << result;

    return 0;
}