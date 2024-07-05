bool iscuber(int a) {
    if (a < 0) 
        return false; 
    
    for (int i = 0; i * i * i <= a; ++i) {
        if (i * i * i == a) {
            return true;
        }
    }
    return false;
}