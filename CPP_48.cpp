string str = "";
for (int i = text.length() - 1; i >= 0; --i) {
    str += text[i];
}
return text == str;