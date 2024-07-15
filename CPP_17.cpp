for (char c : music_string) {
    if (c == ' ') {
        continue;
    } else if (c == 'o' || c == '.') {
        if (note == "") {
            beats.push_back(4);
        } else {
            beats.push_back(2);
        }
    } else if (c == '|') {
        note = "";
    }
}