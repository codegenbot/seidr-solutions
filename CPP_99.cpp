double num = stod(value);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    return (num - floor_num < ceil_num - num) ? floor_num : ceil_num;
}