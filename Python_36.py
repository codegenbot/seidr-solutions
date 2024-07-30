def fizz_buzz(n):
    return 'Fizz'*(n % 3 == 0) + 'Buzz'*(n % 5 == 0) or n

try:
    n = int(input())
    if n <= 0:
        print("Input should be a positive integer.")
    else:
        result = fizz_buzz(n)
        print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")