int closest_integer(string value){
    double number = stod(value);
    
    if(number > 0){
        return floor(number + 0.5);
    } else {
        return ceil(number - 0.5);
    }
}