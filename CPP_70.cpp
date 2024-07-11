sort(lst.begin(), lst.end());
vector<int> res;
int i = 0, j = lst.size() - 1;
while (i <= j) {
    res.push_back(lst[i++]);
    if (i <= j) res.push_back(lst[j--]);
}
return res;
}