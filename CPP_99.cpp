int closest_integer(string value){
    double num = stod(value); // convert the string value to double
    int closest = round(num); // round the double value to the nearest integer

    // check if the number is equidistant from two integers
    if (num - floor(num) == 0.5) {
        if (num < 0) {
            closest = floor(num); // round it away from zero
        } else {
            closest = ceil(num); // round it away from zero
        }
    }

    return closest;
}