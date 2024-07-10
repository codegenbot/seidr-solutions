n = int(input().strip())

if n <= 1:
    print("Please enter a positive integer greater than 1.")
else:
    result = factorize(n)
    print(result)