int next_smallest(vector<int> lst) {
  if (lst.size() < 2) {
    return -1;
  }

  vector<int> sortedList = lst;
  sort(sortedList.begin(), sortedList.end());
  
  int smallest = sortedList[0];
  int secondSmallest = -1;
  
  for (int num : lst) {
    if (num > smallest) {
      secondSmallest = num;
      break;
    }
  }
  
  return secondSmallest;
}