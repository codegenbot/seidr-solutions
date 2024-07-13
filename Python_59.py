```
def largest_prime_factor(n):
    i = n
    while i > 1:
        if n % i == 0:
            j = i
            while j % i == 0:
                j //= i
            if j == 1:
                return i
        i -= 1
    return n

while True:
    try:
        num = input("Enter a number: ")
        n = int(num)
        print(largest_prime_factor(n))
    except ValueError:
        print("Invalid input. Please enter an integer.")