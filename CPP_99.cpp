int closest_integer(string value){
    double num = stod(value);
    int rounded_num = round(num);
    
    if (num - (double)rounded_num < 0) {
        return floor(num);
    } else {
        return ceil(num);
    }
}