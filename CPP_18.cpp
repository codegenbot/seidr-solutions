int count = 0;
    for(size_t i = 0; (i = str.find(substring, i)) != string::npos; i += substring.length()) {
        count++;
    }
    return count;
}