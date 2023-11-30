int closest_integer(string value){
    float num = stof(value);
    int rounded = round(num);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    
    if (num - floor_num == ceil_num - num) {
        if (num > 0) {
            return ceil_num;
        } else {
            return floor_num;
        }
    } else if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}