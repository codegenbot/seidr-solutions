def fizz_buzz(n):
    return [
        ("Fizz" * (num % 3 == 0) + "Buzz" * (num % 5 == 0)) or str(num)
        for num in range(1, n + 1)
    ]

if __name__ == "__main__":
    try:
        n = int(input("Enter a positive integer: ").strip())
        if n < 1:
            print("Input should be a positive integer.")
        else:
            result = fizz_buzz(n)
            print(result)
    except ValueError:
        print("Invalid input. Please enter a valid integer.")