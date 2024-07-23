sort(lst.begin(), lst.end());
int smallest = lst[0];
for (int i = 1; i < lst.size(); ++i) {
    if (lst[i] > smallest) {
        return lst[i];
    }
}
return None;