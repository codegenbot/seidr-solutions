using namespace std;

std::string solve(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            result += (s[i] >= 'a' && s[i] <= 'z') ? std::toupper(s[i]) : std::tolower(s[i]);
        }else{
            result += s[i];
        }
    }
    return result;
}