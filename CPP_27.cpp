using namespace std;

string flip_case(string str){
    string result = "";
    for(int i = 0; i < str.length(); i++){
        char c = str[i];
        if(isalpha(c)){
            if(isupper(c)) result += tolower(c);
            else result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}