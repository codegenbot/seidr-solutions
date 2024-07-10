string filp_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]>96 && str[i]<123) // lowercase characters
            result+= toupper(str[i]);
        else if(str[i]>64 && str[i]<91) // uppercase characters
            result+= tolower(str[i]);
        else 
            result+= str[i];
    }
    return result;
}