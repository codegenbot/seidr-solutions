int count = 0;
    for (size_t i = 0; (i = str.find(substring, i)) != string::npos; i += 1) {
        count++;
    }
    return count;
}