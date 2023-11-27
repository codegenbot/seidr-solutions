bool is_simple_power(int x, int n) {
    if (n == 1) {
        if (x == 1) {
            return true;
        } else {
            return false;
        }
    }

    int power = 0;
    int temp = x;

    while (temp % n == 0) {
        temp /= n;
        power++;
    }

    if (temp == 1) {
        return true;
    } else {
        return false;
    }
}