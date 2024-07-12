if (capitalize) {
    result += toupper(c);
} else if (c != '-') { 
    result += tolower(c);
}
capitalize = c == '-' ? true : false;