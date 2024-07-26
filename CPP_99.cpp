double val = stod(value);
    int floorVal = floor(val);
    int ceilVal = ceil(val);
    return abs(val - floorVal) < abs(val - ceilVal) ? floorVal : ceilVal;
}