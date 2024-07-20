using namespace std;

string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
        } else {
            string temp = "";
            bool foundSpace = false;
            for(int j=i; j<s.length() && !foundSpace; j++){
                if(s[j] != ' '){
                    temp += s[j];
                } else {
                    foundSpace = true;
                }
            }
            sort(temp.begin(), temp.end());
            result += temp;
        }
    }
    return result;
}