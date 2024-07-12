if (lst.size() < 2) {
    return -1;
}

vector<int> sortedList = lst;
sort(sortedList.begin(), sortedList.end());

int secondSmallest = sortedList[1];

return secondSmallest;