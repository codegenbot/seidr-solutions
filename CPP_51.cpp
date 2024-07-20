```
string str = "";
for(char c : text) {
    if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' 
       && !islower(c))
        str += c;
}
return str;