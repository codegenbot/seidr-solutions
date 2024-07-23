n, m = map(int, input("Enter values for n and m: ").split())
print('{:.8f}'.format((n * (n-1) + n * (m-1)) / (2 * n * m))