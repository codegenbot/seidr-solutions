vector<int> sort_array(vector<int> array){
  vector<int> sortedArray = array;
  int sum = sortedArray.front() + sortedArray.back();
  if(sum % 2 == 0){
    sort(sortedArray.rbegin(), sortedArray.rend());
  }else{
    sort(sortedArray.begin(), sortedArray.end());
  }
  return sortedArray;
}