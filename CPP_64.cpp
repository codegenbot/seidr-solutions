int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
            (s.length() - 1 == find(s.rbegin(), s.rend(), c).distance(s.rbegin())))
            count++;
        else if (c == 'y')
            count += (s.length() - 1 == find(s.rbegin(), s.rend(), c).distance(s.rbegin()));
        else
            continue;
    }
    return count;
}