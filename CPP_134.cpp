if(txt.empty()){
        return false;
    }
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        size_t lastSpaceIdx = txt.find_last_of(' ');
        if (lastSpaceIdx == string::npos || lastSpaceIdx < txt.size() - 1) {
            return true;
        }
    }
    return false;
}