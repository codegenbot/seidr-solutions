for(int i=0; i<str.length(); i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i]-='32'; // subtracting 32 to convert lowercase to uppercase 
    } else if(str[i]>='A' && str[i]<='Z'){
        str[i]+='32'; // adding 32 to convert uppercase to lowercase
    }
}
return str;