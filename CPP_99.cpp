double num = stod(value);
int res = static_cast<int>(round(num));
if (num - static_cast<double>(res) == 0.5) {
    if (num > 0) {
        res = static_cast<int>(ceil(num));
    } else {
        res = static_cast<int>(floor(num));
    }
}
return res;
}