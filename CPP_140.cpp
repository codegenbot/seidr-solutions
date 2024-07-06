int main() {
    string text;
    cin >> text;
    for(int i = 0; i < text.length(); ++i) {
        if(text[i] == ' ') {
            if(i+1 < text.length() && text[i+1] == ' '){
                while(i+1 < text.length() && text[i+1] == ' ') i++;
                text.replace(i, i-i, "-");
            }
            else text.replace(i, 1, "_");
        }
    }
    cout << text;
    return 0;
}