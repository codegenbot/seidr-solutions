Here's the completed function:

bool is_simple_power(int x, int n){
    return pow(n, ceil(log(x)/log(n))) == x;
}