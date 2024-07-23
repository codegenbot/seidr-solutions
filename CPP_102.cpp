int choose_num(int x, int y){
    if((x|y)%2==1) return -1; 
    if(x%2==0 && y%2==0){
        return (x>y)?y:x;
    }else{
        for(int i=x; i<=y; i++){
            if(i%2==0)
                return i;
        }
    }
}