```
n = None
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