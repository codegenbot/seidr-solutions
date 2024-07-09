for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            for (int j = i + 1; j < text.length(); ++j) {
                if (text[j] == ' ') {
                    count++;
                    text[j] = '-';
                } else {
                    break;
                }
            }
            if (count > 2) {
                for (int k = i + 1; k < text.length(); ++k) {
                    if (text[k] == '-') {
                        text[k] = '_';
                    } else {
                        break;
                    }
                }
            }
        }
    }
    return text;
}