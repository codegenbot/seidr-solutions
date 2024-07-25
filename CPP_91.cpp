int is_bored(string S) {
    int boredomCount = 0;
    size_t pos = 0;
    while ((pos = S.find(". ", pos)) != string::npos || (pos = S.find("?!")) != string::npos) {
        if (S.substr(0, 2) == "I ") {
            boredomCount++;
        }
        pos += 3; // skip the dot and a space
    }
    return boredomCount;
}