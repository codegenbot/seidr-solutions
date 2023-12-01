vector<string> by_length(vector<int> arr){
  vector<string> result;
  map<int, string> digitMap = {
    {1, "One"},
    {2, "Two"},
    {3, "Three"},
    {4, "Four"},
    {5, "Five"},
    {6, "Six"},
    {7, "Seven"},
    {8, "Eight"},
    {9, "Nine"}
  };

  sort(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end());

  for(int i = 0; i < arr.size(); i++){
    if(arr[i] >= 1 && arr[i] <= 9){
      result.push_back(digitMap[arr[i]]);
    }
  }

  return result;
}