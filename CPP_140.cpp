char prev = ' ';
string result = "";
for (char c : text) {
    if (c == ' ') {
        if (prev == ' ') {
            result.pop_back();
            result.push_back('-');
        } else {
            result.push_back('_');
        }
    } else {
        result.push_back(c);
    }
    prev = c;
}
if (result.back() == '-') {
    result.pop_back();
}
return result;
}