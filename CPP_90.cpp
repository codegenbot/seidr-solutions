sort(lst.begin(), lst.end());
int min_val = lst.front();
for (int num : lst) {
    if (num > min_val) {
        return num;
    }
}
return -1;