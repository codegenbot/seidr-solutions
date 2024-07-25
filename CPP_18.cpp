int how_many_times(string str, string substring){
    if(substring.empty()) return 0;
    int count = 0;
    size_t position = str.find(substring, 0);
    while(position != string::npos){
        count++;
        position = str.find(substring, position + 1);
    }
    return count;
}