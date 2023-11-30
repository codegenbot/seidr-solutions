string fix_spaces(string text){
    int n = text.length();
    string result = "";
    int count = 0;
    for(int i=0; i<n; i++){
        if(text[i] == ' '){
            count++;
            if(count > 2){
                result += "-";
                count = 1;
            }
            else{
                result += "_";
            }
        }
        else{
            result += text[i];
            count = 0;
        }
    }
    return result;
}