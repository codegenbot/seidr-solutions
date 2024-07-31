int count_distinct_characters(string str) {
    string temp;
    for (char c : str) {
        if (isalpha(c)) {
            while (!temp.empty() && !temp.back() == tolower(c)) {
                temp.pop_back();
            }
            temp += tolower(c);
        }
    }
    return temp.size();
}