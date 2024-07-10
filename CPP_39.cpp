if (n <= 0) {
    return -1;
}

if (n == 1) {
    return 2;
}

if (n <= 2) {
    return 1;
}

int prev = 1, curr = 1, next;
for (int i = 3; i <= n; ++i) {
    next = prev + curr;
    prev = curr;
    curr = next;
}

while (!isPrime(curr)) {
    next = prev + curr;
    prev = curr;
    curr = next;
}

return curr;