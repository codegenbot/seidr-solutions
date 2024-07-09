#include <string>
using namespace std;

string std::string flip_case(string str){
    string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower(c);
        else
            result += c;
    }
    return result;
}

int main() {
    assert (flip_case("These violent delights have violent ends") == "tHEse ViOleNt DeLiGhTs HaVe ViOleNt EnDs");
    return 0;
}