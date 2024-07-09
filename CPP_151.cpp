```cpp
long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;

}

int main() {
    std::vector<float> lst;
    lst.push_back(1.5f);
    lst.push_back(2.0f);
    lst.push_back(3.5f); 
    long long odd_sum = double_the_difference(lst); 
    return 0;
}