int closest_integer(string value){
    double num = stod(value);
    int floorNum = floor(num);
    int ceilNum = ceil(num);
    
    if (abs(num - floorNum) < abs(num - ceilNum)) {
        return floorNum;
    } else if (abs(num - floorNum) > abs(num - ceilNum)) {
        return ceilNum;
    } else {
        if (num < 0) {
            return ceilNum;
        } else {
            return floorNum;
        }
    }
}