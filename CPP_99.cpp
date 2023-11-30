int closest_integer(string value){
    double num = stod(value);
    int floorNum = floor(num);
    int ceilNum = ceil(num);
    
    if (num - floorNum < ceilNum - num) {
        return floorNum;
    } else {
        return ceilNum;
    }
}