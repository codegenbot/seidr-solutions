int closest_integer(string value){
    double num = stod(value);
    int closestInt = round(num);
    if (closestInt == num) {
        return closestInt;
    } else if (num > 0) {
        return floor(num + 0.5);
    } else {
        return ceil(num - 0.5);
    }
}