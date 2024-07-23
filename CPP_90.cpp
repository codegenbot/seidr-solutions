sort(lst.begin(), lst.end());
int count = 1;
for (size_t i = 0; i < lst.size(); ++i) {
    if (lst[i] != lst[i + 1]) {
        ++count;
    }
    if (count == 2) {
        return lst[i + 1];
    }
}
return -1;