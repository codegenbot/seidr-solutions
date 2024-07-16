for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            for (int j = i + 1; j < text.size(); ++j) {
                if (text[j] == ' ') {
                    count++;
                    if (count > 2) {
                        text[j] = '-';
                    }
                } else {
                    break;
                }
            }
        }
    }
    return text;
}