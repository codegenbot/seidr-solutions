```c++
#include<string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower(c);
        else
            result += c;
    }
    return result;

int main() {
    string input;
    cout << "Enter a sentence: ";
    cin >> input;
    string output = flip_case(input);
    cout << "Flipped case of your sentence is: " << output << endl;
    return 0;
}