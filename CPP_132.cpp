int n = str.length();
int cnt = 0;
for (int i = 0; i < n; i++) {
    if (str[i] == '[') {
        cnt++;
    } else {
        cnt--;
    }
    if (cnt < 0) {
        return true;
    }
}
return false;
}