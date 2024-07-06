using namespace std;

string solve(std::string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char c = (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
            result += c;
        } else {
            result += s[i];
        }
    }
    return (result.find_first_not_of(" ") == string::npos) ? string(result.rbegin(), result.rend()) : result;
}