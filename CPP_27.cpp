char c;
string filp_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        c = str[i];
        if(c >= 'a' && c <= 'z')
            c -= 32; // convert to uppercase
        else if(c >= 'A' && c <= 'Z')
            c += 32; // convert to lowercase
        result += c;
    }
    return result;
}