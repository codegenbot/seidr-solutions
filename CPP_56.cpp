std::string correct_bracketing(std::string brackets) {
    int count = 0;
    std::string result;

    for(char c : brackets){
        if(c == '<'){
            count++;
            result += '<';
        }
        else if(c == '>'){
            if(count <= 0) return "";
            count--;
            result += '>';
        }
    }

    return count == 0 ? result : "";
}