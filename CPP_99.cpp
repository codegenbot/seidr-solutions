double num = stod(value);
int result = round(num);
if (num - floor(num) == 0.5) {
    if (num > 0) {
        result = ceil(num);
    } else {
        result = floor(num);
    }
}
return result;