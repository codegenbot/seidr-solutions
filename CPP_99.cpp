double num = stod(value);
int rounded = static_cast<int>(round(num));
if (num - rounded == 0.5) {
    return (num > 0) ? static_cast<int>(ceil(num)) : static_cast<int>(floor(num));
} else {
    return rounded;
}