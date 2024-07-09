string filp_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else
            result += tolower(c);
    }
    return result;
}

string filp_case(string str);
int main() {
    string s;
    cout << "Enter a sentence: ";
    cin >> s;
    string res = filp_case(s);
    cout << "Flipped case: " << res << endl;
    return 0;
}