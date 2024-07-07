string fix_spaces(string text){
    string result = "";
    int count = 0;

    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            count++;
            if(count > 2) {
                result += "-";
            } else {
                if(result != "") {
                    result += "_";
                }
            }
        } else {
            if(count > 1) {
                while(count > 1) {
                    result += "_";
                    count--;
                }
            }
            result += text[i];
            count = 0;
        }
    }

    return result;
}