string str = "";
for(int i=0; i<text.length();i++){
    if(text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' &&
       text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U')
        str += text[i];
}
return str;