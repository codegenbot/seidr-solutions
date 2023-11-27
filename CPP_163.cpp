vector<int> generate_integers(int a, int b) {
  vector<int> result;
  
  for (int i = a; i <= b; i++) {
    // check if current number is even
    if (i % 2 == 0) {
      result.push_back(i); // add even number to result vector
    }
  }
  
  return result;
}