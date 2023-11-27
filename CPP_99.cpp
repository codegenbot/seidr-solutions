int closest_integer(string value){
    double num = stod(value);
    int rounded = round(num);
    if (num - rounded == 0.5) {
        if (num > 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    } else {
        return rounded;
    }
}