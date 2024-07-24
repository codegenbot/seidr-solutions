vector<int> largest_smallest_integers(vector<int> lst) {
    int largest = 0, smallest = INT_MAX;
    
    for (int i : lst) {
        if (i < 0 && i > largest)
            largest = i;
        else if (i > 0 && i < smallest)
            smallest = i;
    }
    
    return {largest >= 0 ? 0 : largest, smallest <= 0 ? 0 : smallest};
}