std::string anti_shuffle(const std::string& str) {
    if (str.length() <= 1)
        return str;
    
    int n = str.length();
    char temp[n];
    strcpy(temp, str.c_str());
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j > 0; j--) {
            if (temp[i] > temp[j]) {
                char c = temp[i];
                temp[i] = temp[j];
                temp[j] = c;
            }
            else
                break;
        }
    }
    
    return std::string(temp);
}