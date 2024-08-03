int last_space_index = -1;
for(int i=txt.length()-2; i>=0; i--){
    if(txt[i] == ' ')
        last_space_index = i+1;
}
return (last_space_index != txt.length() && isalpha(txt.back()));