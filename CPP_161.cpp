std::string solve(const std::string &s) {
    std::string result = s;
    for (char &c : result) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    int i = 0, j = result.size() - 1;
    while (i < j) {
        std::swap(result[i], result[j]);
        i++;
        j--;
    }
    return result;
}