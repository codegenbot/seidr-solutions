int count_upper(string str) {
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(toupper(str[i]) == 'A' || toupper(str[i]) == 'E' || toupper(str[i]) == 'I' || toupper(str[i]) == 'O' || toupper(str[i]) == 'U') {
            count++;
        }
    }
    return count;
}