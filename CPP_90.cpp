if (lst.size() < 2) return -1; // Assuming None is represented by -1
sort(lst.begin(), lst.end());
int first_smallest = lst[0];
for (int i = 1; i < lst.size(); ++i) {
    if (lst[i] != first_smallest) {
        return lst[i];
    }
}
return -1; // No second smallest element found