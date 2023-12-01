int closest_integer(string value){
    float num = stof(value);
    int closest = round(num);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    
    if(abs(num - floor_num) == abs(num - ceil_num)){
        if(num > 0){
            return ceil_num;
        }
        else{
            return floor_num;
        }
    }
    else if(abs(num - floor_num) < abs(num - ceil_num)){
        return floor_num;
    }
    else{
        return ceil_num;
    }
}