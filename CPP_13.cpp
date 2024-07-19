while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
}
return a;
}