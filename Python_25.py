n = input("Enter a positive number to factorize: ").strip()
if not n.isdigit() or int(n) <= 0:
    print("Please enter a positive integer.")
else:
    n = int(n)
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    print(factors)