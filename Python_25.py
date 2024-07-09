```
try:
    n = int(input("Enter an integer: "))
except ValueError:
    print("Please enter a valid integer.")
else:
    result = factorize(n)
    print(result)