```
def largest_prime_factor(n):
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
    return n

while True:
    try:
        n = int(input("Enter a number: "))
        print(largest_prime_factor(n))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")