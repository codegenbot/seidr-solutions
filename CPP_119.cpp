int count_open = 0;
int count_close = 0;

for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            count_open++;
        } else if (c == ')') {
            count_close++;
        }
    }
}

if (count_open == count_close) {
    return "Yes";
} else {
    return "No";
}