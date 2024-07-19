double num = stod(value);
    double ceil_val = ceil(num);
    double floor_val = floor(num);
    
    if (num - floor_val < ceil_val - num) {
        return static_cast<int>(floor_val);
    } else {
        return static_cast<int>(ceil_val);
    }
}