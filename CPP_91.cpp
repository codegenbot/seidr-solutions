size_t findPattern(const string& input) {
    size_t count = 0;
    size_t pos = 0;
    while ((pos = input.find("I am bored", pos)) != string::npos) {
        if (pos == string::npos) break;
        count++;
        pos = input.find("I am bored", pos);
    }
    return count;

}