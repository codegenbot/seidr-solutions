```
def find_prime_numbers(n):
    prime_numbers = []
    for num in range(2, n + 1):
        is_prime = True
        for div in range(2, int(num ** 0.5) + 1):
            if num % div == 0:
                is_prime = False
                break
        if is_prime:
            prime_numbers.append(num)
    return prime_numbers

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n < 1:
            print("Please enter a positive integer.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(find_prime_numbers(n))