bool move_one_ball(vector<int> arr) {
    int one = 0; // count of elements that are equal to 1
    for (int i : arr) {
        if (i == 1)
            one++;
    }
    return one >= (arr.size() - one);
}