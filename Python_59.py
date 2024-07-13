def largest_prime_factor(n):
    i = 2
    prime_factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            while n % i == 0:
                prime_factors.append(i)
                n //= i
    if n > 1:
        prime_factors.append(n)
    return max(prime_factors)

while True:
    try:
        n = int(input("Enter a number: "))
        print(largest_prime_factor(n))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")