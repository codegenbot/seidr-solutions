bool iscuber(int a){
    int i = 1;
    while(cbrt(a) != round(cbrt(a))){
        i++;
    }
    return cbrt(a) == i;
}