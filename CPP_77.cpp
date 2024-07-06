bool iscuber(int a){
    int i = 0;
    while (pow(i+1,3) <= a){
        if(pow(i+1,3) == a)
            return true;
        i++;
    }
    return false;
}