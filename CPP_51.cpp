string::iterator it = text.begin();
for (; it != text.end(); ++it) {
    if (tolower(*it) == 'a' || tolower(*it) == 'e' ||
        tolower(*it) == 'i' || tolower(*it) == 'o' ||
        tolower(*it) == 'u') {
        text.erase(it);
        --it;
    }
}
return text;