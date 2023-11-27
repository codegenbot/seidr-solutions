int closest_integer(string value){
    double num = std::stod(value); //convert string to double

    double decimal = num - (int)num; //find the decimal part

    if (decimal == 0.5) {
        if (num < 0) {
            return (int)floor(num);
        } else {
            return (int)ceil(num);
        }
    } else {
        return round(num); //round the number to the closest integer
    }
}