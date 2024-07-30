n = int(input())
try:
    if n < 1:
        print("Input should be a positive integer.")
    else:
        result = fizz_buzz(n)
        print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")