vector<string> total_match(vector<string> lst1, vector<string> lst2){
  int sum1 = 0, sum2 = 0;
  for(string s : lst1)
    sum1 += s.length();
  for(string s : lst2)
    sum2 += s.length();
  return (sum1 < sum2) ? lst1 : lst2;
}