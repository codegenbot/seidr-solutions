string txt;
cin >> txt;

bool result = false;

if(txt.length() > 0) {
    if(isalpha(txt.back())) {
        int i = txt.length()-1;
        while(i > 0 && isspace(txt[i-1])) {
            i--;
        }
        if(i == 0 || !isalpha(txt[i-1])) {
            result = true;
        }
    }
}

cout << (result ? "true" : "false") << endl;

return result;