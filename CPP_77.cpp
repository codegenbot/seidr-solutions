Here is the completed code:

bool iscuber(int a){
    int i = 1;
    while(cbrt(i) <= a){
        if(pow(i,3) == a) return true;
        i++;
    }
    return false;
}