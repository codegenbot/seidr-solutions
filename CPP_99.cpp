int closest_integer(string value){
    float num = stof(value); // convert string to float
    int rounded_num = round(num); // round the float to the nearest integer

    // check if the rounded number is equidistant from two integers
    if (num - rounded_num == 0.5) {
        // round away from zero
        if (num > 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    } else {
        return rounded_num;
    }
}