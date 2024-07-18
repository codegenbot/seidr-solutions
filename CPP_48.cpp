for(int i=0; i<text.length()/2; i++){
    if(text[i] != text[text.length()-1-i]){
        return false;
    }
}
return true;