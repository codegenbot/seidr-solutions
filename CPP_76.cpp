int main(){
    assert(is_simple_power(1, 12) == true);
    assert(is_simple_power(16, 4) == true);
    assert(is_simple_power(27, 3) == true);
    assert(is_simple_power(10, 2) == false);
    assert(is_simple_power(0, 5) == false);
}