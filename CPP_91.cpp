int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I ", pos)) != string::npos) {
        count++;
        pos += 2;
    }
    return count;
}