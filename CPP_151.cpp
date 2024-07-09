int main() {
    std::vector<float> lst;
    long long odd_sum = 0;

    lst.push_back(1.5f);
    lst.push_back(2.0f);
    lst.push_back(3.5f);

    odd_sum = double_the_difference(lst); 

    assert(odd_sum == 14);
    return 0;
}