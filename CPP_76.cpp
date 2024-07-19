if (n == 1 && x == 1) {
    return true;
}

if (n == 1 || x == 1) {
    return false;
}

int power = 0;

while (pow(n, power) < x) {
    power++;
}

return pow(n, power) == x;
}