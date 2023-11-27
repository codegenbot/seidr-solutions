vector<string> by_length(vector<int> arr){
  vector<string> result;
  vector<int> sorted_arr;
  
  // Sort the integers between 1 and 9
  for(int i=0; i<arr.size(); i++){
    if(arr[i] >= 1 && arr[i] <= 9){
      sorted_arr.push_back(arr[i]);
    }
  }
  sort(sorted_arr.begin(), sorted_arr.end());
  
  // Reverse the sorted array
  reverse(sorted_arr.begin(), sorted_arr.end());
  
  // Replace each digit by its corresponding name
  map<int, string> digit_map = {
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
  
  for(int i=0; i<sorted_arr.size(); i++){
    result.push_back(digit_map[sorted_arr[i]]);
  }
  
  return result;
}