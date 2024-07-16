if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        int spacePos = txt.find_last_of(' ');
        if(spacePos == string::npos) return true;
        for(int i = spacePos + 1; i < txt.size(); i++){
            if(isalpha(txt[i])) return false;
        }
        return true;
    }
    return false;
}