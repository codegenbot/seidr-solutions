def fizz_buzz(n):
    return [("Fizz"*(i%3==0) + "Buzz"*(i%5==0)) or str(i) for i in range(1, n+1)]

try:
    n = int(input())
    if n <= 0:
        print("Input should be a positive integer.")
    else:
        result = fizz_buzz(n)
        print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")