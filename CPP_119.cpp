int i = 0, c = 0;
for (auto s : lst) {
    for (char ch : s) {
        if (ch == '(') c++;
        else if (c > 0) c--;
        else return "No";
    }
}
return c == 0 ? "Yes" : "No";
}