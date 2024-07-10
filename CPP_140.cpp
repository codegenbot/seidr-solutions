int main() {
    string text;
    cin >> text;
    for(int i = 0; i < text.length(); i++) {
        if(text[i] == ' ') {
            bool isConsecutive = true;
            int j = i + 1;
            while(j < text.length() && text[j] == ' ') {
                j++;
            }
            if(j - i > 2) {
                for(int k = i; k < j; k++) {
                    text[k] = '-';
                }
                i = j - 1;
            } else {
                text[i] = '_';
            }
        }
    }
    cout << text << endl;
    return 0;
}