int count = 0;
    size_t pos = str.find(substring, 0);
    while(pos != string::npos){
        count++;
        pos = str.find(substring, pos + 1);
    }
    return count;
}