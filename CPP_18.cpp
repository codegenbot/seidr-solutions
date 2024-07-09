int how_many_times(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    
    string local_str = str; // create a local copy of the string
    
    while ((pos = local_str.find(substring)) != string::npos) {
        count++;
        local_str.erase(0, pos + substring.length()); // modify the local copy
    }
    return count;

}