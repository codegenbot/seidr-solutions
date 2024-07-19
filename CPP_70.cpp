sort(lst.begin(), lst.end());
vector<int> result;
int left = 0, right = lst.size() - 1;
bool switcher = true;
while(left <= right) {
    if (switcher) {
        result.push_back(lst[left]);
        left++;
    } else {
        result.push_back(lst[right]);
        right--;
    }
    switcher = !switcher;
}
return result;
}