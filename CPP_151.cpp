int mainTest() {
    std::vector<float> lst;
    long long odd_sum = 0;

    lst = {1,3,5,7};
    for(auto x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            odd_sum += int(x);
    }

    assert(double_the_difference(lst) == pow(odd_sum, 2));
    return 0;
}