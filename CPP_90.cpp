sort(lst.begin(), lst.end());
int count = 1;
int smallest = lst[0];
for (int i = 1; i < lst.size(); ++i) {
    if (lst[i] != smallest) {
        ++count;
        if (count == 2) {
            return lst[i];
        }
    }
}
return None;