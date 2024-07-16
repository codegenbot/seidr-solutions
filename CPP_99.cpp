double num = stod(value);
if (num >= 0) {
    return (int)(num + 0.5);
} else {
    return (int)(num - 0.5);
}