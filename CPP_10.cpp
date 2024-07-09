int main(){
    string str;
    cin >> str;
    
    if(is_palindrome(str)){
        cout << str;
    } else {
        string prefix = "", suffix = str;
        
        while(!is_palindrome(suffix)){
            prefix += suffix.back();
            suffix.pop_back();
        }
        
        reverse(prefix.begin(),prefix.end());
        cout << str + prefix;
    }
    
    return 0;
}