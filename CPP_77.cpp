bool iscuber(int a) {
    if (a < 0)
        return false; 
    if (a == 0)
        return false; 
    int i = 1;
    while (pow(i,3) <= a){
        if(pow(i,3) == a)
            return true;
        i++;
    }
    return false;

}