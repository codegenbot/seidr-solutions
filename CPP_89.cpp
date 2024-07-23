string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char rotated = c + 2 * 2;
            if (islower(c)) {
                if (rotated > 'z') {
                    rotated = 'a' + rotated - 'z' - 1;
                }
            } else {
                if (rotated > 'Z') {
                    rotated = 'A' + rotated - 'Z' - 1;
                }
            }
            result += rotated;
        } else {
            result += c;
        }
    }
    return result;
}