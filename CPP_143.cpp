Here is the solution:

string words_in_sentence(string sentence){
    vector<string> words = split(sentence, ' ');
    string result = "";
    
    for(int i=0; i<words.size(); i++){
        if(is_prime(words[i].length())){
            result += words[i] + " ";
        }
    }
    
    return result;
}

vector<string> split(string str, char c) {
    vector<string> arr;
    size_t pos = 0;
    while ((pos = str.find(c)) != string::npos) {
        arr.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    arr.push_back(str);
    return arr;
}

bool is_prime(int n){
    if(n<=2)
        return false;
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) 
            return false;
    }  
    return true;
}