string anti_shuffle(string s){
    size_t start = 0;
    size_t end = s.find(' ');

    while (end != string::npos) {
        sort(s.begin() + start, s.begin() + end);
        start = end + 1;
        end = s.find(' ', start);
    }

    sort(s.begin() + start, s.end());

    return s;
}