vector<int> levels;
    levels.push_back(n);
    for(int i = 1; i < n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n++;
        }
        levels.push_back(n);
    }
    return levels;