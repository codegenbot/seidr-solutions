replace(s.begin(), s.end(), ' ', '\n');
    istringstream is(s);

    string word;
    string result = "";
    while(is >> word) {
        sort(word.begin(), word.end());
        result += word + ' ';
    }

    return result;
}