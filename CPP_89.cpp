string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            result += (char)(base + (((c - base) + 2) * 2) % 26);
        } else {
            result += c;
        }
    }
    return result;
}