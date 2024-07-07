for(int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (c == '-' || c == ' ') { 
        capitalizeNext = true;
    } else if (capitalizeNext) {
        result += toupper(c);
        capitalizeNext = false;
    } else {
        result += tolower(c);
    }
}