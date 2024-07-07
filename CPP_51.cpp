using namespace std;

string remove_vowels(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(!("aeiouAEIOU").find(tolower(text[i])) != string::npos){
            result += text[i];
        }
    }
    return result;
}