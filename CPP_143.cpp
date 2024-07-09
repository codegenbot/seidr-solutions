#include <iostream>
#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    string result = "";
    for(int i=0; i<sentence.length();i++){
        if(sentence[i] == ' '){
            continue;
        }else{
            if(i==0){
                result += toupper(sentence[i]);
            }
            else if(i+1 >= sentence.length() || tolower(sentence[i+1]) != 'a' && tolower(sentence[i+1]) != 'e' && tolower(sentence[i+1]) != 'i' && tolower(sentence[i+1]) != 'o' && tolower(sentence[i+1]) != 'u'){
                result += toupper(sentence[i]);
            }
        }
    }
    return result;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = words_in_sentence(sentence);
    cout << "The output is: " << result << endl;

    return 0;
}