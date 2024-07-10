vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             int sumA = 0, sumB = 0;
             for (char c : a) {
                 if (isalpha(c)) {
                     sumA += issame(tolower(c)) ? 1 : 3;
                 }
             }
             for (char c : b) {
                 if (isalpha(c)) {
                     sumB += issame(tolower(c)) ? 1 : 3;
                 }
             }
             return tie(sumA, a) < tie(sumB, b);
         });

    return result;
}

bool issame(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}