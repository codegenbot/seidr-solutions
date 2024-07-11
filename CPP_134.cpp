if(txt.empty()){
        return false;
    }
    
    char lastChar = txt.back();
    
    if(isalpha(lastChar)){
        int spaceIndex = txt.find_last_of(" ");
        if(spaceIndex == string::npos || spaceIndex < txt.size()-1)
            return true;
    }
    
    return false;
}