int cnt = 0;
for (char c : brackets) {
    if (c == '(') {
        cnt++;
    } else {
        cnt--;
        if (cnt < 0) {
            return false;
        }
    }
}
return cnt == 0;
}