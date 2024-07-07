int choose_num(int x, int y){
    if(x > y) {
        if(y % 2 == 0) return y;
        else return -1;
    } else if(x % 2 != 0) {
        if(y < x+1) return -1;
        else return x;
    } else {
        for(int i = x; i <= y; i++) {
            if(i % 2 == 0) return i;
        }
        return -1;
    }
}