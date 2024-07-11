```
values = input("Enter integers separated by space: ")
a, b = map(int, values.split())
print(gcd(a, b))