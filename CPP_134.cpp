if(txt.empty()){
    return false;
}
int n = txt.size();
char last_char = txt[n-1];
if(isalpha(last_char) && (n == 1 || txt[n-2] == ' ')){
    return true;
}
return false;
}