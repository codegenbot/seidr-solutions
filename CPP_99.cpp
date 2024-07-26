int closest_integer(string value){
    double number = stod(value);
    int rounded = round(number);
    if (number - rounded > 0) {
        return ceil(number);
    } else {
        return floor(number);
    }
}