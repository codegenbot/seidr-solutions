sort(lst.begin(), lst.end());
vector<int> result;
int i = 0, j = lst.size()-1;
while (i <= j) {
    if (i == j) {
        result.push_back(lst[i]);
    } else {
        result.push_back(lst[i]);
        result.push_back(lst[j]);
    }
    i++;
    j--;
}
return result;
}