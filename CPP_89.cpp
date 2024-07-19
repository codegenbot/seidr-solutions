string result = "";
    for (char& c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = base + (c - base + 2 * 2) % 26;
        }
        result += c;
    }
    return result;
}