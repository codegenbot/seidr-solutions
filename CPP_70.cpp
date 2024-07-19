sort(lst.begin(), lst.end());
vector<int> sorted;
int left = 0, right = lst.size() - 1;

while (left <= right) {
    sorted.push_back(lst[left++]);
    if (left <= right) {
        sorted.push_back(lst[right--]);
    }
}

return sorted;
}