bool iscuber(int a){
    int i = 1;
    while (true) {
        if (pow(i,3) == a) 
            return true;  
        else if (i*i > a)
            return false;  
        i++;
    }
}