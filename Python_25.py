n = input("Enter a number: ")
if not n.isdigit():
    print("Invalid input. Please enter a valid number.")
    exit()
n = int(n)

def factorize(n):
    return [i for i in range(1, n + 1) if n % i == 0]

result = factorize(n)
print(result)