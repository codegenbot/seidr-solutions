vector<string>::iterator it = strings.begin();
if (it == strings.end()) {
    return "";
}
for (vector<string>::iterator i = ++it; i != strings.end(); ++i) {
    if (i->length() > it->length()) {
        it = i;
    } else if (i->length() == it->length()) {
        if (i->compare(it->substr(0, 1)) < 0) {
            it = i;
        }
    }
}
return *it;