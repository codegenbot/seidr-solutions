string get_closest_vowel(string word){
    int n = word.size();
    string result;
    bool found = false;

    for(int i=n-1; i>=0; --i){
        if(!isVowel(word[i])){
            continue;
        }
        if(!found){
            result = word.substr(i);
            found = true;
        } else {
            break;
        }
    }

    if(!found || result.size() < 2){
        return "";
    }

    for(int i=result.size()-1; i>=0; --i){
        if(isConsonant(result[i])){
            result = result.substr(0, i+1);
            break;
        } else if(isVowel(result[i])){
            result = result.substr(i+1);
        }
    }

    return result;
}

bool isVowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isConsonant(char c){
    c = tolower(c);
    if(isalpha(c)){
        return !isVowel(c);
    }
    return false;
}