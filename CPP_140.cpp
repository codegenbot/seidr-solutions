for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            int count = 1;
            for (int j = i + 1; j < text.size() && text[j] == ' '; ++j) {
                count++;
            }
            if (count > 2) {
                text.replace(i, count, "-");
            } else {
                text.replace(i, count, "_");
            }
        }
    }
    return text;
}