float truncate_number(float number) {
   int integerPart = (int)number;
   float decimalPart = number - integerPart;
   return decimalPart;
}