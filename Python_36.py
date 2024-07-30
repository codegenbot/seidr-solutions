def fizz_buzz(n):
    return [
        ("Fizz" * (n % 3 == 0) + "Buzz" * (n % 5 == 0)) or str(n)
        for n in range(n)
    ]

if __name__ == "__main__":
    try:
        n = int(input().strip())
        if n < 1:
            print("Input should be a positive integer.")
        else:
            result = fizz_buzz(n)
            print(result)
    except ValueError:
        print("Invalid input. Please enter a valid integer.")