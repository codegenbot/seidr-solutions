string encrypted = "";
    for (char c : s) {
        char newChar = c + 2 * 2;
        if (newChar > 'z') {
            newChar = 'a' + (newChar - 'z') - 1;
        }
        encrypted += newChar;
    }
    return encrypted;
}