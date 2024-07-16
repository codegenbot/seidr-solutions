if(txt.empty()) return false;
char lastChar = txt.back();
if(isalpha(lastChar)){
    if(txt.find_last_of(' ') != string::npos && txt.find_last_of(' ') > txt.find_last_not_of(' ')){
        return true;
    }
}
return false;
}