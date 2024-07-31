int count_distinct_characters(string str) {
    string temp;
    for (char c : str) {
        if (isalpha(c)) {
            temp[0] = tolower(temp[0]);
            if (!temp.empty() && !temp.back() == c) {
                temp += c;
            }
        }
    }
    return temp.size();
}