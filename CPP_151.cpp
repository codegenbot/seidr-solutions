double double_the_difference(vector<float> lst) {
    double sum = 0;
    
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] >= 0 && floor(lst[i]) == lst[i] && static_cast<int>(lst[i]) % 2 == 1) {
            sum += lst[i] * lst[i];
        }
    }
    
    return sum;
}