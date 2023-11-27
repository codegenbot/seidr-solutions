bool any_int(float a, float b, float c) {
    int num1 = round(a);
    int num2 = round(b);
    int num3 = round(c);

    if ((num1 == num2 + num3) || (num2 == num1 + num3) || (num3 == num1 + num2)) {
        return true;
    } else {
        return false;
    }
}