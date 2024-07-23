double num = stod(value);
int res = round(num);
if (num - res == 0.5) {
    return num > 0 ? ceil(num) : floor(num);
} else {
    return res;
}