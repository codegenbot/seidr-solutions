for(char &c : text){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        c = ' ';
    }
}
text.erase(remove(text.begin(), text.end(), ' '), text.end());
return text;