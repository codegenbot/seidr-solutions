int closest_integer(string value){
    double num = stod(value); // convert the string value to double
    int floor_num = floor(num); // round down the number
    int ceil_num = ceil(num); // round up the number

    // calculate the absolute difference between the original number and the rounded numbers
    double diff_floor = abs(num - floor_num);
    double diff_ceil = abs(num - ceil_num);

    // if the difference is equal, round away from zero
    if (diff_floor == diff_ceil) {
        if (num > 0) {
            return ceil_num;
        } else {
            return floor_num;
        }
    }

    // return the closest integer
    if (diff_floor < diff_ceil) {
        return floor_num;
    } else {
        return ceil_num;
    }
}