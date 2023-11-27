int closest_integer(string value){
    float num = stof(value);
    int closestInt = round(num);
    int floorInt = floor(num);
    int ceilInt = ceil(num);
    
    if(abs(num - floorInt) == abs(num - ceilInt)){
        if(num > 0){
            return ceilInt;
        } else {
            return floorInt;
        }
    } else if(abs(num - floorInt) < abs(num - ceilInt)){
        return floorInt;
    } else {
        return ceilInt;
    }
}