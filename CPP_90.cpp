sort(lst.begin(), lst.end());
int count = 1;
for (int i = 0; i < lst.size(); ++i) {
    if (lst[i] < lst[count - 1]) {
        return lst[i];
    }
}
return None;