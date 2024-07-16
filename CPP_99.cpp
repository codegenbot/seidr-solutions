float num = stof(value);
    int lower = floor(num);
    int higher = ceil(num);
    
    if (num - lower < higher - num) {
        return lower;
    } else {
        return higher;
    }
}