def fizz_buzz(n):
    return [("Fizz"*(n%3==0) + "Buzz"*(n%5==0)) or str(n) for n in range(1, n+1)]

try:
    n = int(input("Enter a positive integer: "))  # Move input inside try block
    if n < 1:
        print("Input should be a positive integer.")
    else:
        result = fizz_buzz(n)
        print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")