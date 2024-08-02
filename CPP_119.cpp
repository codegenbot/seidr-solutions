int total_open = 0, total_close = 0;

for (const auto& str : lst) {
    for (char c : str) {
        if (c == '(') {
            total_open++;
        } else if (c == ')') {
            total_close++;
        }
    }
}

if (total_open == total_close)
    return "Yes";
else
    return "No";