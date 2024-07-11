double num = stod(value);
int closestInt = static_cast<int>(round(num));
if (num - closestInt > 0) {
    return ceil(num);
} else {
    return floor(num);
}