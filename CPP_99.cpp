int closest_integer(string value){
    double num = stod(value);
    if (num > 0) {
        return static_cast<int>(floor(num + 0.5));
    } else {
        return static_cast<int>(ceil(num - 0.5));
    }
}