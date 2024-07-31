string anti_shuffle(const string& str) {
    if (str.length() <= 1) {
        return str;
    }
    int n = str.length();
    for(int i = 0; i < n; ++i) {
        if(str[i] == ' ') { 
            return "";
        }
    }
    string result = str;
    for(int i = 1; i < n; ++i) {
        int j = rand() % (i + 1);
        char temp = result[j];
        result[j] = result[i];
        result[i] = temp;
    }
    return result;
}