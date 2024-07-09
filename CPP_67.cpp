int fruit_distribution(string s, int n){
    int totalApples = 0, totalOranges = 0;
    sscanf(s.c_str(), "%d apples and %d oranges", &totalApples, &totalOranges);
    return n - totalApples - totalOranges;
}