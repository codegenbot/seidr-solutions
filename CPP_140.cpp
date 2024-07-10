string fix_spaces(string text){
    string result = "";
    int count = 0;
    for(int i=0; i < text.length(); i++){
        if(text[i] == ' '){
            if(count > 2) result += "-";
            else result += '_';
            count = 0;
        }else{
            while(count > 2 && (i-count > 0 && text[i-count] == ' ')){
                if(i-count > 1) result.insert(result.begin(), '-');
                else result.insert(result.begin(), '_');
                i--;
                count--;
            }
            if(text[i] != ' ') result += text[i];
            count++;
        }
    }
    return result;
}