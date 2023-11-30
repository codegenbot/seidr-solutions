int closest_integer(string value){
    double num = stod(value); // convert string to double
    int roundedNum = round(num); // round the number to the nearest integer

    if (num - roundedNum == 0.5) {
        // If the number is equidistant from two integers, round it away from zero
        if (num > 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    } else {
        return roundedNum;
    }
}