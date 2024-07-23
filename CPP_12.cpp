string result = "None";
    int max_len = 0;
    for (const string& s : strings) {
        if (s.length() > max_len || (s.length() == max_len && s < result)) {
            max_len = s.length();
            result = s;
        }
    }
    return result;
}