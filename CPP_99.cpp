int closest_integer(string value){
    double num = stod(value);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    
    if (abs(num - floor_num) < abs(num - ceil_num)) {
        return floor_num;
    } else {
        return ceil_num;
    }
}