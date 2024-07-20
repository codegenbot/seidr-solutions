bool is_palindrome(string text){
    string str = ""; // ignore case sensitivity
    for(int i=0; i<text.length(); i++){
        if(text[i] >= 'a' && text[i] <= 'z') 
            str += tolower(text[i]);  
        else if(text[i] >= 'A' && text[i] <= 'Z')
            str += tolower(text[i]);
    }

    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if(str[start] != str[end])
            return false; 
        start++;
        end--;
    }
    return true;
}