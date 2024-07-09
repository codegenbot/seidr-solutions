string words_in_sentence(string sentence){
    vector<string> words = split(sentence, ' ');
    string result = "";
    for(int i = 0; i < words.size(); i++){
        if(is_prime(word_length(words[i]))){
            result += words[i] + " ";
        }
    }
    return result;
}

int word_length(string s){
    int len = 0;
    for(char c : s){
        len++;
    }
    return len;
}

bool is_prime(int n){
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

vector<string> split(string s, char c){
    vector<string> result;
    string temp = "";
    for(char ch : s){
        if(ch != c){
            temp += ch;
        }else{
            if(!temp.empty()){
                result.push_back(temp);
                temp = "";
            }
        }
    }
    if(!temp.empty()) result.push_back(temp);
    return result;
}