vector<string> by_length(vector<int> arr){
  vector<string> result;
  vector<int> sortedArr;

  for(int num : arr){
    if(num >= 1 && num <= 9){
      sortedArr.push_back(num);
    }
  }

  sort(sortedArr.begin(), sortedArr.end());

  reverse(sortedArr.begin(), sortedArr.end());

  map<int, string> numMap;
  numMap[1] = "One";
  numMap[2] = "Two";
  numMap[3] = "Three";
  numMap[4] = "Four";
  numMap[5] = "Five";
  numMap[6] = "Six";
  numMap[7] = "Seven";
  numMap[8] = "Eight";
  numMap[9] = "Nine";

  for(int num : sortedArr){
    result.push_back(numMap[num]);
  }

  return result;
}