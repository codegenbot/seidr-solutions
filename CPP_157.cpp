if (pow(a, 2) + pow(b, 2) == pow(c, 2) || 
        pow(b, 2) + pow(c, 2) == pow(a, 2) || 
        pow(c, 2) + pow(a, 2) == pow(b, 2)) {
        return true;
    }
    return false;
}