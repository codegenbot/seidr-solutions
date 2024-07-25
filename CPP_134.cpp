if(txt.empty())
        return false;
    char lastChar = txt.back();
    if(isalpha(lastChar) && !isalnum(*(txt.end()-2)))
        return true;
    return false;
}