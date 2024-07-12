n = 0
try:
    n = int(input("Enter a number: "))
    if n <= 0:
        raise ValueError
except ValueError:
    print("Invalid input. Please enter a valid positive number.")
    exit()
    
def factorize(n):
    return [i for i in range(1, n + 1) if n % i == 0]

result = factorize(n)
print(result)