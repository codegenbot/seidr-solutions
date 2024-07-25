int apples = 0;
    int oranges = 0;
    int mangoes = 0;
    
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    
    mangoes = n - apples - oranges;
    
    return mangoes;
}