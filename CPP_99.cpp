float num = stof(value);
int result = round(num);
if (num - result == 0.5 || num - result == -0.5) {
    if (num > 0) {
        result = ceil(num);
    } else {
        result = floor(num);
    }
}
return result;