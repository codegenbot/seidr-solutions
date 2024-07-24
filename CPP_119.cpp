int count_open = 0, count_close = 0;

for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            count_open++;
        } else if (c == ')') {
            if (count_open > 0) {
                count_open--;
            } else {
                count_close++;
            }
        }
    }
}

if (count_open == 0 && count_close == 0) {
    return "Yes";
} else {
    return "No";
}