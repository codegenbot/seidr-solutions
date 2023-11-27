int closest_integer(string value){
    float num = stof(value);
    int closest = round(num);
    if (num - closest == 0.5) {
        if (num > 0) {
            closest++;
        } else {
            closest--;
        }
    }
    return closest;
}