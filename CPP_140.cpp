int count = 0;
for (int i = 0; i < text.length(); ++i) {
    if (text[i] == ' ') {
        count++;
        if (count > 2) {
            text[i] = '-';
        }
    } else {
        count = 0;
    }
}

for (int i = 0; i < text.length(); ++i) {
    if (text[i] == ' ') {
        text[i] = '_';
    } else if (text[i] == '-') {
        int j = i + 1;
        while (j < text.length() && text[j] == '-') {
            text[j] = '_';
            j++;
        }
        i = j - 1;
    }
}

return text;