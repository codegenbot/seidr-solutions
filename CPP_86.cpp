using namespace std;

string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
        } else {
            string temp = "";
            int j=i;
            while(j < s.length() && s[j] != ' '){
                temp += s[j];
                j++;
            }
            sort(temp.begin(), temp.end());
            for(int k=0; k<temp.length(); k++){
                result += temp[k];
            }
            i = j-1;
        }
    }
    return result;
}