string str;
for(char c: text){
    if(!isalpha(c) || tolower(c)<'a' || tolower(c)> 'e'){
        str += c;
    }
}
return str;