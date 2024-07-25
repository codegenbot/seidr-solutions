if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = pow(x, 1.0 / n);
    
    if (ceil(result) == result) {
        return true;
    } else {
        return false;
    }
}