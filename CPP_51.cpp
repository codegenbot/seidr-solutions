string::iterator it = text.begin();
string result;

while (it != text.end()) {
    if (!isvowel(*it)) {
        result += *it;
    }
    ++it;
}

return result;