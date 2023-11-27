int closest_integer(string value){
    float num = stof(value);
    int closest = round(num);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    
    if(abs(num - floor_num) < abs(num - ceil_num)){
        closest = floor_num;
    }
    else if(abs(num - floor_num) > abs(num - ceil_num)){
        closest = ceil_num;
    }
    else{
        closest = (num > 0) ? ceil_num : floor_num;
    }
    
    return closest;
}