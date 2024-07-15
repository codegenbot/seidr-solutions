string binary_str = "db";
  while(decimal > 0){
      binary_str = to_string(decimal % 2) + binary_str;
      decimal = decimal / 2;
  }
  return binary_str + "db";
}