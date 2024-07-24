bool iscuber(int a){
    int i = 1;
    while (i * i * i <= a) {
        if (i * i * i == a)
            return true;
        if (i * i * i > a)
            return false;
        i++;
    }
    return false;
}