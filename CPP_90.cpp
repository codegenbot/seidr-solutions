sort(lst.begin(), lst.end());
if (lst.size() < 2)
    return -1;
int prev = lst[0], cnt = 1;
for (int i = 1; i < lst.size(); ++i) {
    if (lst[i] != prev) {
        cnt++;
        if (cnt == 2)
            return lst[i];
        prev = lst[i];
    }
}
return -1;
}