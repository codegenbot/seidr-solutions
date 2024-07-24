n = input("Enter a positive number to factorize: ").strip()
if not n.isdigit():
    print("Please enter a positive integer.")
else:
    n = int(n)
    if n <= 0:
        print("Please enter a positive integer.")
    else:
        factors = []
        for i in range(1, n + 1):
            if n % i == 0:
                factors.append(i)
        print(factors)