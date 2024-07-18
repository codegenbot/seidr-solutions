sort(lst.begin(), lst.end());
vector<int> result;
int left = 0, right = lst.size() - 1;
while (left <= right) {
    if (left == right) {
        result.push_back(lst[left]);
        break;
    }
    result.push_back(lst[left]);
    result.push_back(lst[right]);
    left++;
    right--;
}
return result;
}