int closest_integer(string value){
    double num = stod(value);
    int closest = round(num);
    if (num - closest == 0.5 || num - closest == -0.5) {
        closest = round(num + 0.1);
    }
    return closest;
}