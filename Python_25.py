try:
    n = int(input("Enter a number: "))
except ValueError:
    print("Invalid input. Please enter a valid integer.")
    exit(1)

result = factorize(n)
print(result)