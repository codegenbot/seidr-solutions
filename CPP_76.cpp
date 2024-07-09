if (n == 1 && x == 1) {
    return false;
}
if (x < n) {
    return false;
}
int p = 1;
while (p <= x) {
    if (p == x) {
        return true;
    }
    p *= n;
}
return false;
}