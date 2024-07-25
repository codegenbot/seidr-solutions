for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int space_count = 1;
            while (i + space_count < text.length() && text[i + space_count] == ' ') {
                space_count++;
            }
            if (space_count > 2) {
                text.replace(i, space_count, "-");
                i += (space_count - 1);
            }
        }
    }
    return text;
}