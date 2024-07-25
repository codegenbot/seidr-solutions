using namespace std;

string get_closest_vowel(string word){
    int n = word.size();
    string closest = "";
    for(int i=n-1; i>=0; --i){
        if(!isalpha(word[i])) continue;
        char c = tolower(word[i]);
        if(isvowel(c)){
            if(closest.empty()) return string(1, c);
            else{
                int diff1 = abs(c - 'a');
                int diff2 = abs(toupper(closest[0]) - 'A');
                if(diff1 < diff2) return string(1, c);
                else return closest;
            }
        }else{
            while(i > 0 && !isalpha(word[i-1])){
                i--;
            }
            if(i > 0){
                char d = tolower(word[i-1]);
                if(isvowel(d)){
                    if(closest.empty()) closest = string(1, d);
                    else{
                        int diff1 = abs(d - 'a');
                        int diff2 = abs(toupper(closest[0]) - 'A');
                        if(diff1 < diff2) closest = string(1, d);
                    }
                }
            }
        }
    }
    return closest;
}

int main(){
    cout << get_closest_vowel("Above") << endl;
    return 0;
}