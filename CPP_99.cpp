double num = stod(value);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    return abs(num - floor_num) < abs(num - ceil_num) ? floor_num : ceil_num;
}