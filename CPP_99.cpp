int closest_integer(string value){
    double num = stod(value);
    int rounded = round(num);
    int floorVal = floor(num);
    int ceilVal = ceil(num);
    
    if (rounded - num < num - rounded) {
        return rounded;
    } else if (num - floorVal < ceilVal - num) {
        return floorVal;
    } else {
        return ceilVal;
    }
}