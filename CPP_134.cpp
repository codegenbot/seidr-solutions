string::iterator it = txt.begin();
while (it != txt.end() && *it == ' ') {
    ++it;
}
if (it == txt.end()) {
    return false;
}
return isalpha(*--it);