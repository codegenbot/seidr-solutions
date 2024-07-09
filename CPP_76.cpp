if (x == 1)
    return true;
else if (n == 1 || x == 0)
    return false;
else
    return pow(x, 1.0/n) == round(pow(x, 1.0/n));