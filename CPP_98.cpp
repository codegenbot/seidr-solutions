int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && isupper(s[i]))) { 
            switch(toupper(s[i])) {
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    count++;
                    break;
            }
        }
    }
    return count;
}