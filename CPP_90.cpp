if (lst.size() < 2) return -1;
sort(lst.begin(), lst.end());
int first = lst[0];
for (int i = 1; i < lst.size(); ++i) {
    if (lst[i] != first) {
        return lst[i];
    }
}
return -1;