int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result = encrypt(str);
    cout << "Encrypted String: " << result << endl;
    return 0;
}

string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm')
            encrypted += (char)(c - ('a' - 1));
        else if(c >= 'n' && c <= 'v')
            encrypted += (char)(c - ('n' - 2));
        else if(c >= 'w' && c <= 'z')
            encrypted += (char)(c - ('w' - 4));
        else
            encrypted += c;
    }
    return encrypted;
}