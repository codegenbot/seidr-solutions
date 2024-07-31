int fruit_distribution(string s, int n){
    int apples, oranges, mangoes;
    sscanf(s.c_str(),"%d apples and %d oranges", &apples, &oranges);
    mangoes = n - apples - oranges;
    return mangoes;
}