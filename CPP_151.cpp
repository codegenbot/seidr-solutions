long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            if (x % 2 != 0) { 
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 3.0f, 5.0f};
    int odd_sum = double_the_difference(lst);

    assert(double_the_difference(lst) == odd_sum );

    return 0;
}