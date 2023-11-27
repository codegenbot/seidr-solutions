int closest_integer(string value){
    float num = stof(value);
    int closestInt = round(num);

    if (closestInt > num) {
        closestInt--;
    }

    return closestInt;
}