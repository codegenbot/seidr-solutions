int len = text.length();
for(int i=0; i<len/2; i++){
    if(text[i] != text[len-i-1])
        return false;
}
return true;