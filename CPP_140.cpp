int i = 0;
while(i < text.length()){
    if(text[i] == ' '){
        if(i+1 < text.length() && text[i+1] == ' '){
            if(i+2 >= text.length() || text[i+2] != ' '){
                replace(text.begin(), text.begin()+i+1, '_', 1);
                i++;
                while(i+1 < text.length() && text[i+1] == ' '){
                    text.replace(i+1, 1, "-");
                    i++;
                }
            }else{
                i++;
            }
        }else{
            text.replace(i, 1, "_");
            i++;
        }
    }else{
        i++;
    }
}
return text;