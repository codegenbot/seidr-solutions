```
int fibfib(int n) {
  if (n <= 2) {
    return 0;
  } else {
    return fibfib(n-1) + fibfib(n-2) + fibfib(n-3);
  }
}
```