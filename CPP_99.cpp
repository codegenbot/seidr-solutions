double val = stod(value);
int lower = floor(val);
int upper = ceil(val);
if (abs(val - lower) < abs(val - upper)) {
    return lower;
} else {
    return upper;
}