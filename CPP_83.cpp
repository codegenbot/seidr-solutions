int starts_one_ends(int n){
    int count = 0;
    int start = 1;
    int end = 1;

    for(int i = 1; i < n; i++){
        start *= 10;
        end *= 10;
    }

    for(int i = start; i < start * 10; i++){
        if(i % 10 == 1)
            count++;
    }

    for(int i = end; i < end + 10; i++){
        if(i % 10 == 1)
            count++;
    }

    return count;
}