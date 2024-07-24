int count = 0;
    string result = "";
    for(char c : text){
        if(c == ' '){
            count++;
            if(count > 2){
                result.pop_back();
                result.pop_back();
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += c;
            count = 0;
        }
    }
    return result;
}