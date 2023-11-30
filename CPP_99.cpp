int closest_integer(string value){
    float num = stof(value);
    int roundedNum = round(num);
    int floorNum = floor(num);
    int ceilNum = ceil(num);
    
    if (abs(num - roundedNum) < abs(num - floorNum) && abs(num - roundedNum) < abs(num - ceilNum)) {
        return roundedNum;
    } else if (abs(num - floorNum) < abs(num - ceilNum)) {
        return floorNum;
    } else {
        return ceilNum;
    }
}