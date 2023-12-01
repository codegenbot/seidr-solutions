int specialFilter(vector<int> nums) {
  int count = 0;
  
  for (int num : nums) {
    string strNum = to_string(num);
    int firstDigit = strNum[0] - '0';
    int lastDigit = strNum.back() - '0';
    
    if (firstDigit % 2 != 0 && lastDigit % 2 != 0 && num > 10) {
      count++;
    }
  }
  
  return count;
}