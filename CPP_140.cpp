int consecutive_spaces = 0;
string result = "";
for (char c : text) {
    if (c == ' ') {
        consecutive_spaces++;
        if (consecutive_spaces > 2) {
            result.pop_back();
            result.pop_back();
            result.push_back('-');
            consecutive_spaces = 1;
        } else {
            result.push_back('_');
        }
    } else {
        consecutive_spaces = 0;
        result.push_back(c);
    }
}
return result;
}