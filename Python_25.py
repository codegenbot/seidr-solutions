n = input("Enter an integer: ")
try:
    n = int(n)
    result = factorize(n)
    print(result)
except ValueError as e:
    print(f"Error: {e}")