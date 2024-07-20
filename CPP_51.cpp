string::iterator it = text.begin();
while (it != text.end()) {
    if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' ||
        tolower(*it) == 'a' || tolower(*it) == 'e' || tolower(*it) == 'i' || tolower(*it) == 'o' || tolower(*it) == 'u') {
        it = text.erase(it);
    } else {
        ++it;
    }
}
return text;