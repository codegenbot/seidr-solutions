n = int(input("Enter a positive number to factorize: ").strip())
while n <= 0:
    print("Please enter a positive integer.")
    n = int(input("Enter a positive number to factorize: ").strip())

factors = []
for i in range(1, n + 1):
    if n % i == 0:
        factors.append(i)
print(factors)