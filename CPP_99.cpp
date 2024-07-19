int closest_integer(string value){
    double number = stod(value);
    if (number >= 0) {
        return static_cast<int>(round(number));
    } else {
        return static_cast<int>(ceil(number));
    }
}