sort(lst.begin(), lst.end());
vector<int> res;
int i = 0, j = lst.size() - 1;
while (i <= j) {
    if (i == j) {
        res.push_back(lst[i]);
        break;
    }
    res.push_back(lst[i]);
    res.push_back(lst[j]);
    i++;
    j--;
}
return res;
}