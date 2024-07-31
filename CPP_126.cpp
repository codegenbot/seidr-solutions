int duplicateCount = 0;
for (int i = 1; i < lst.size(); i++) {
    if (lst[i] <= lst[i - 1]) {
        return false;
    }
    if (lst[i] == lst[i - 1]) {
        duplicateCount++;
        if (duplicateCount > 1) {
            return false;
        }
    }
}
return true;