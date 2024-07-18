sort(lst.begin(), lst.end());
int pos = 0, count = 0;
for (int i = 0; i < lst.size(); ++i) {
    if (i > 0 && lst[i] != lst[i - 1]) {
        ++count;
    }
    if (count == 1) {
        pos = i;
        break;
    }
}
if (count < 2) {
    return -1; // None
}
return lst[pos];