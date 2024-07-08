#include <string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(char c : str){
        if(islower(c)) {
            result += toupper(c);
        } else {
            result += tolower(c);
        }
    }
    return result;
}

int main(){
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    string output = flip_case(s);
    cout << "Flipped case of the input is: " << output << endl;
    return 0;
}