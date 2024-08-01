bool iscuber(int a){
    int i = 1;
    while (1) {
        if (pow(i,3) == a)
            return true;
        if (i*i > a)
            return false;
        i++;
    }
}