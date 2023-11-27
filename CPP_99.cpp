int closest_integer(string value){
    double num = stod(value); // convert string to double
    int closestInt = round(num); // round the number to the closest integer

    // check if the number is equidistant from two integers
    if (abs(num - closestInt) == 0.5){
        if (num > 0){
            closestInt = ceil(num); // round up
        }
        else{
            closestInt = floor(num); // round down
        }
    }

    return closestInt;
}