bool iscuber(int a){
    int i = 1;
    while (true){
        if(pow(i,3) == a) return true;
        else if(a < pow(i,3)) break;
        i++;
    }
    return false;
}