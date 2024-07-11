int main() {
    string text;
    cin >> text;
    for(int i = 0; i < text.length(); i++) {
        if(text[i] == ' ') {
            int j = i + 1;
            while(j < text.length() && text[j] == ' ') j++;
            if(j - i > 2) {
                string temp = text.substr(i, j - i);
                text.replace(i, j - i, "-" + temp);
                i += j - i - 1;
            } else {
                text.replace(i, j - i, "_");
                i++;
            }
        }
    }
    cout << text;
    return 0;
}