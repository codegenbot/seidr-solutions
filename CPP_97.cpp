int multiply(int a, int b) {
  int lastDigitA = abs(a) % 10;
  int lastDigitB = abs(b) % 10;
  return lastDigitA * lastDigitB;
}