int closest_integer(string value){
    double num = stod(value);
    int rounded = round(num);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    
    if (rounded == floor_num || rounded == ceil_num) {
        return rounded;
    } else if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}