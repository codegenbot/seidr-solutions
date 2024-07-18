double num = stod(value);
    int closestInt;
    
    if (num >= 0) {
        closestInt = (int)(num + 0.5);
    } else {
        closestInt = (int)(num - 0.5);
    }
    
    return closestInt;
}