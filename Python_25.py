n = int(input("Enter a number: "))
if n > 0:
    def factorize(n):
        return [i for i in range(1, n+1) if n % i == 0]
    print(factorize(n))
else:
    print("Please enter a positive integer.")