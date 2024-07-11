string result = "";
    int shift = 2 * 2;
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}