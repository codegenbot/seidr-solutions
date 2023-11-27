int closest_integer(string value){

    // convert the string to a float
    float num = stof(value);

    // check if the number is equidistant from two integers
    if (num - floor(num) == 0.5) {
        // if the number is positive, round up
        if (num > 0) {
            return ceil(num);
        }
        // if the number is negative, round down
        else {
            return floor(num);
        }
    }
    // round the number to the nearest integer
    else {
        return round(num);
    }
}