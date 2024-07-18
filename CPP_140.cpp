for(int i=0; i<text.length(); ++i){
    if(text[i] == ' '){
        if(i+2 < text.length() && text[i+1] == ' ' && text[i+2] == ' '){
            text[i] = '_';
            text[i+1] = '_';
            while(i+1 < text.length() && text[i+1] == ' '){
                text.erase(i+1, 1);
            }
            text.insert(i+1, "-");
        }
        else{
            text[i] = '_';
        }
    }
}
return text;
}