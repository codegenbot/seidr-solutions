bool iscuber(int n) {
    int side = round(cbrt(n));
    if (n == pow(side, 3))
        return true;
    else
        return false;
}

int main() {
    originalFunction();
    assert (iscuber(1729) == false);
    return 0;
}