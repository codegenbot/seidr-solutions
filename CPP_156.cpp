string int_to_mini_roman(int number){
  vector<pair<int, string>> roman_map = {
    {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
    {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
    {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
  };

  string result = "";
  int index = 0;
  while(number > 0){
    int times = number / roman_map[index].first;
    number -= times * roman_map[index].first;
    for(int i = 0; i < times; i++){
      result += roman_map[index].second;
    }
    index++;
  }

  return result;
}