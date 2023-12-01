int next_smallest(vector<int> lst){
  // Check if the vector is empty or has only one element
  if (lst.size() < 2) {
    return None;
  }
  
  // Sort the vector in ascending order
  sort(lst.begin(), lst.end());
  
  // Iterate through the sorted vector and find the second smallest element
  int smallest = lst[0], second_smallest = lst[1];
  for (int i = 2; i < lst.size(); i++) {
    if (lst[i] > smallest && lst[i] < second_smallest) {
      second_smallest = lst[i];
    }
  }
  
  // Check if there is a second smallest element
  if (second_smallest == smallest) {
    return None;
  }
  
  // Return the second smallest element
  return second_smallest;
}