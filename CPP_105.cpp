vector<string> by_length(vector<int> arr){
  vector<string> result;
  map<int, string> digitMap;
  digitMap[1] = "One";
  digitMap[2] = "Two";
  digitMap[3] = "Three";
  digitMap[4] = "Four";
  digitMap[5] = "Five";
  digitMap[6] = "Six";
  digitMap[7] = "Seven";
  digitMap[8] = "Eight";
  digitMap[9] = "Nine";

  // Sort the integers between 1 and 9 inclusive
  vector<int> sortedArr;
  for (int num : arr) {
    if (num >= 1 && num <= 9) {
      sortedArr.push_back(num);
    }
  }
  sort(sortedArr.begin(), sortedArr.end());

  // Reverse the sorted array and replace each digit by its corresponding name
  reverse(sortedArr.begin(), sortedArr.end());
  for (int num : sortedArr) {
    result.push_back(digitMap[num]);
  }

  return result;
}