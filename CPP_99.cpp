int closest_integer(string value){
    double num = stod(value);
    int closestInt;

    if (num >= 0) {
        closestInt = floor(num + 0.5);
    } else {
        closestInt = ceil(num - 0.5);
    }

    return closestInt;
}