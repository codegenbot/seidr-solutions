string::iterator it = text.begin();
string::iterator end = text.end();

for (; it != end; ++it) {
    if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u'
        || tolower(*it) == 'a' || tolower(*it) == 'e' || tolower(*it) == 'i'
        || tolower(*it) == 'o' || tolower(*it) == 'u') {
        text.erase(it);
        --end;
    }
}

return text;