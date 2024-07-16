double num = stod(value);
    int rounded = static_cast<int>(round(num));
    int ceil_val = static_cast<int>(ceil(num));
    int floor_val = static_cast<int>(floor(num));
    
    if (abs(num - floor_val) < abs(num - ceil_val)) {
        return floor_val;
    } else {
        return ceil_val;
    }
}