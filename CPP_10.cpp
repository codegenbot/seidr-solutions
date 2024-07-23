int main(){
    string str;
    cin>>str;
    string suffix = "";
    for(int i=str.size()-1; i>=0; i--){
        suffix = str[i] + suffix;
        if(is_palindrome(suffix)){
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            cout<<str+prefix<<endl;
            break;
        }
    }
    return 0;
}