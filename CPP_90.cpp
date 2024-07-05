if (lst.size() < 2) return -1; // Using -1 to represent None

sort(lst.begin(), lst.end());

int smallest = lst[0];
for (int i = 1; i < lst.size(); ++i) {
    if (lst[i] > smallest) {
        return lst[i];
    }
}

return -1; // If no 2nd smallest element is found