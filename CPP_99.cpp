int closest_integer(string value){
    double num = stod(value);
    double floorValue = floor(num);
    double ceilValue = ceil(num);
    
    if(num - floorValue < ceilValue - num){
        return (int)floorValue;
    }
    else{
        return (int)ceilValue;
    }
}