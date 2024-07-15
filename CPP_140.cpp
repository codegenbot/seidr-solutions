for (int i = 0; i < text.length(); ++i) {
    if (text[i] == ' ' && i < text.length()-2 && text[i+1] == ' ' && text[i+2] == ' ') {
        text.replace(i, 3, "-");
        i--; // Adjust index after replace
    } else if (text[i] == ' ') {
        text.replace(i, 1, "_");
    }
}
return text;