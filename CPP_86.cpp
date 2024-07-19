string result;
    string word;
    for(char c : s){
        if(c != ' '){
            word.push_back(c);
        } else {
            sort(word.begin(), word.end());
            result += word + ' ';
            word.clear();
        }
    }
    sort(word.begin(), word.end());
    result += word;

    return result;
}