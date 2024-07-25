for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
        int count = 1;
        int j = i + 1;
        while (j < text.size() && text[j] == ' ') {
            count++;
            j++;
        }
        if (count > 2) {
            text.replace(i, count, "-");
        } else {
            text.replace(i, count, "_");
        }
    }
}
return text;