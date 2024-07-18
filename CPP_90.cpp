sort(lst.begin(), lst.end());
int smallest = INT_MAX, second_smallest = INT_MAX;
for (int i = 0; i < lst.size(); i++) {
    if (lst[i] < smallest) {
        second_smallest = smallest;
        smallest = lst[i];
    } else if (lst[i] < second_smallest && lst[i] != smallest) {
        second_smallest = lst[i];
    }
}
if (second_smallest == INT_MAX) {
    return -1;
} else {
    return second_smallest;
}
}