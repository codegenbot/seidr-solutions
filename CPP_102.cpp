int result = -1;
    for(int i = y; i >= x; i--){
        if(i % 2 == 0){
            result = i;
            break;
        }
    }
    return result;
}