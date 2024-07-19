sort(lst.begin(), lst.end());
int count = 0;
int prev = lst[0];
for (int num : lst) {
    if (num != prev) {
        count++;
        prev = num;
    }
    if (count == 2) {
        return num;
    }
}
return -1;