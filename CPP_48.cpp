bool is_palindrome(string text){
    string str = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] >= 'a' && text[i] <= 'z' || text[i] >= 'A' && text[i] <= 'Z'){
            str += tolower(text[i]);
        }
    }
    int left = 0;
    int right = str.length() - 1;
    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}