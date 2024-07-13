```
while True:
    try:
        num = input("Enter a number: ")
        n = int(num)
        print(largest_prime_factor(n))
    except ValueError:
        print("Invalid input. Please enter an integer.")