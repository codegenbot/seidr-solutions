int fruit_distribution(string s, int n) {
  int apples = 0;
  int oranges = 0;
  
  // Find the number of apples and oranges in the string
  int pos = s.find("apples");
  if (pos != string::npos) {
    apples = stoi(s.substr(0, pos));
  }
  
  pos = s.find("oranges");
  if (pos != string::npos) {
    oranges = stoi(s.substr(pos));
  }
  
  // Calculate the number of mangoes
  int mangoes = n - apples - oranges;
  
  return mangoes;
}