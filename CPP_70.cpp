sort(lst.begin(), lst.end());
int n = lst.size();
vector<int> result;
int i = 0, j = n - 1;
while (i <= j) {
    if (i == j) {
        result.push_back(lst[i]);
        break;
    }
    result.push_back(lst[i]);
    result.push_back(lst[j]);
    i++;
    j--;
}
return result;
}