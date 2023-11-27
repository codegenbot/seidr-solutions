int closest_integer(string value){
    double num = stod(value);
    int rounded = round(num);
    int floorNum = floor(num);
    int ceilNum = ceil(num);

    if (num - floorNum < ceilNum - num) {
        return floorNum;
    } else if (num - floorNum > ceilNum - num) {
        return ceilNum;
    } else {
        if (num >= 0) {
            return ceilNum;
        } else {
            return floorNum;
        }
    }
}