n, m = map(int, input("Enter the values for n and m: ").split())
print('{:.8f}'.format((n * (n + 1) - m) / (2 * n * m)) )