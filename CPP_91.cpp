#include <string>

int is_bored(string S){
    int count = 0;
    int i = 0;
    int n = S.length();
    
    while(i < n){
        if(S[i] == 'I'){
            while(i < n && S[i] != '.' && S[i] != '?' && S[i] != '!'){
                i++;
            }
            count++;
        }
        i++;
    }
    
    return count;
}

int main() {
    // Test the is_bored function
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int result = is_bored(input);
    cout << "Count: " << result << endl;
    
    return 0;
}