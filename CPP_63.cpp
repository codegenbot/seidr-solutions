if (n == 0 || n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  }
  int a = 0, b = 0, c = 1, res;
  for (int i = 3; i <= n; ++i) {
    res = a + b + c;
    a = b;
    b = c;
    c = res;
  }
  return res;
}