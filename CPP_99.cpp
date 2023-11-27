int closest_integer(string value){
    double number = stod(value);
    int roundedNumber = round(number);
    int floorNumber = floor(number);
    int ceilNumber = ceil(number);
    
    if(abs(number - floorNumber) < abs(number - ceilNumber)){
        return floorNumber;
    }else if(abs(number - ceilNumber) < abs(number - floorNumber)){
        return ceilNumber;
    }else{
        if(number >= 0){
            return ceilNumber;
        }else{
            return floorNumber;
        }
    }
}