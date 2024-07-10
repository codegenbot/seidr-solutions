bool space = false;
for(int i=0; i<txt.length(); i++){
    if(txt[i] == ' '){
        space = true;
        break;
    }
}
return (space && isalpha(txt.back())) ? false : true;