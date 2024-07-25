Here is the solution:

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97&&c<=122){ //check if character is lowercase
            c -= 32; //flip to uppercase
        }else if(c>=65&&c<=90){ //check if character is uppercase
            c += 32; //flip to lowercase
        }
        result+=c;
    }
    return result;
}