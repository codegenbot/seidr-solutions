if(txt.empty()) return false;
    char last_char = txt.back();
    if(isalpha(last_char)){
        int pos = txt.find_last_of(' ');
        if(pos == string::npos) return true; // last character not part of a word
        for(int i=pos+1; i<txt.size(); i++){
            if(!isalpha(txt[i])){
                return true;
            }
        }
    }
    return false;
}