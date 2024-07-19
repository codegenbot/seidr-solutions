if(x == 1) return true;
    
    int root = round(pow(x, 1.0/n));
    if (pow(root, n) == x) return true;
    
    return false;
}