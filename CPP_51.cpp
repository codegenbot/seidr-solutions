string str = "";
for(int i=0; i < text.length(); i++){
    char c = tolower(text[i]);
    if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
        str += c;
    }
}
return str;