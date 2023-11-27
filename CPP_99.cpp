int closest_integer(string value){
    float num = std::stof(value); // Convert the string to float
    int floor_num = floor(num); // Round down to the nearest integer
    int ceil_num = ceil(num); // Round up to the nearest integer
    
    // Calculate the difference between the original number and the rounded numbers
    float diff_floor = abs(num - floor_num);
    float diff_ceil = abs(num - ceil_num);
    
    // If the difference is the same, round away from zero
    if(diff_floor == diff_ceil){
        if(num < 0){
            return ceil_num;
        } else {
            return floor_num;
        }
    }
    
    // Return the closest integer
    if(diff_floor < diff_ceil){
        return floor_num;
    } else {
        return ceil_num;
    }
}