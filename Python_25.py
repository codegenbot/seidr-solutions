n = 1
while True:
    try:
        n = int(input("Enter an integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(find_prime_numbers(n))