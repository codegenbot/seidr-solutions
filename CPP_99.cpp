int closest_integer(string value){
    float num = stof(value); // Convert the string value to float
    int rounded = round(num); // Round the float to the nearest integer
    int floorNum = floor(num); // Round the float down to the nearest integer
    int ceilNum = ceil(num); // Round the float up to the nearest integer
    
    // Check if the rounded number is equidistant from floorNum and ceilNum
    if (abs(rounded - floorNum) == abs(rounded - ceilNum)) {
        // If equidistant, return the farthest from zero
        if (rounded > 0) {
            return ceilNum;
        } else {
            return floorNum;
        }
    } else {
        // If not equidistant, return the rounded number
        return rounded;
    }
}