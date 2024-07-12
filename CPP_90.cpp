sort(lst.begin(), lst.end());
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    for (int num : lst) {
        if (num < smallest) {
            second_smallest = smallest;
            smallest = num;
        } else if (num < second_smallest && num != smallest) {
            second_smallest = num;
        }
    }
    
    if (second_smallest == INT_MAX) {
        return -1;
    } else {
        return second_smallest;
    }
}