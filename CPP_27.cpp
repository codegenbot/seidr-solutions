```cpp
#include<cassert>
string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = (char)str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper((char)c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower((char)c);
        else
            result += (char)c;
    }
    return result;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOLEnt DeLiGhTs HaVe ViOLEnT EnDs");
    string user_input;
    cout << "Enter a sentence: ";
    getline(cin, user_input);
    cout << "The flipped case of the sentence is: " << flip_case(user_input) << endl;
    return 0;
}