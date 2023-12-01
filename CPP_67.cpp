int fruit_distribution(string s, int n) {
  int apples = 0;
  int oranges = 0;
  
  // Get the number of apples and oranges from the string
  size_t applePos = s.find("apples");
  size_t orangePos = s.find("oranges");
  
  if (applePos != string::npos) {
    apples = stoi(s.substr(0, applePos));
  }
  
  if (orangePos != string::npos) {
    oranges = stoi(s.substr(orangePos + 8));
  }
  
  // Calculate the number of mango fruits
  int mangoes = n - apples - oranges;
  
  return mangoes;
}