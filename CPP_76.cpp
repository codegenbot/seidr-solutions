if (x <= 0 || n <= 0) {
    return false;
}

double root = pow(x, 1.0 / n);
int rootInt = (int)root;

return pow(rootInt, n) == x;