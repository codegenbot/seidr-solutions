sort(lst.begin(), lst.end());
vector<int> res;
int left = 0, right = lst.size() - 1;
while (left <= right) {
    res.push_back(lst[left]);
    if (left != right) {
        res.push_back(lst[right]);
    }
    left++;
    right--;
}
return res;
}