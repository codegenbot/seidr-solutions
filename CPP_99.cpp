int closest_integer(string value) {
    float num = stof(value); // convert string to float
    int rounded = round(num); // round the float to the nearest integer

    if (num - rounded == 0.5) {
        if (num > 0) {
            return rounded + 1;
        } else {
            return rounded - 1;
        }
    } else {
        return rounded;
    }
}