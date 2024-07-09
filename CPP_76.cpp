```cpp
bool is_simple_power(int x, int n){
    double y = pow(n, 1);
    while(y <= x){
        if(y == x) return true;
        y *= n;
    }
    return false;
}

int main() {
    assert (is_simple_power(1, 12)==true); 
    return 0; 
}