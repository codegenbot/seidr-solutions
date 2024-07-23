int main(){
    string str;
    cin >> str;

    string palin_suffix = "";
    for (int i=str.size()-1; i>=0; i--) {
        palin_suffix += str[i];
        if (is_palindrome(palin_suffix)){
            string prefix = str.substr(0, str.size()-palin_suffix.size());
            reverse(prefix.begin(), prefix.end());
            cout << str + prefix << endl;
            return 0;
        }
    }

    return 0;
}