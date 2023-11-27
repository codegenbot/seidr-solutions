int closest_integer(string value){
    float num = stof(value); // Convert the string value to float
    int floor_num = floor(num); // Round down to the nearest integer
    int ceil_num = ceil(num); // Round up to the nearest integer

    // Calculate the distance from the floor and ceil numbers to the original number
    float dist_floor = abs(num - floor_num);
    float dist_ceil = abs(num - ceil_num);

    // If the distance to the floor number is less than or equal to the distance to the ceil number, return the floor number
    // Otherwise, return the ceil number
    if (dist_floor <= dist_ceil) {
        return floor_num;
    } else {
        return ceil_num;
    }
}