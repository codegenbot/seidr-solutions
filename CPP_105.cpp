vector<string> by_length(vector<int> arr){
  vector<string> result;
  vector<int> sortedArr;
  
  // Sort the integers between 1 and 9
  for(int i=0; i<arr.size(); i++){
    if(arr[i]>=1 && arr[i]<=9){
      sortedArr.push_back(arr[i]);
    }
  }
  sort(sortedArr.begin(), sortedArr.end());
  
  // Reverse the resulting vector
  reverse(sortedArr.begin(), sortedArr.end());
  
  // Replace each digit by its corresponding name
  map<int, string> digitToName;
  digitToName[1] = "One";
  digitToName[2] = "Two";
  digitToName[3] = "Three";
  digitToName[4] = "Four";
  digitToName[5] = "Five";
  digitToName[6] = "Six";
  digitToName[7] = "Seven";
  digitToName[8] = "Eight";
  digitToName[9] = "Nine";
  
  for(int i=0; i<sortedArr.size(); i++){
    result.push_back(digitToName[sortedArr[i]]);
  }
  
  return result;
}