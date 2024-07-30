def fizz_buzz(n: int) -> int:
    fizz_buzz_count = sum(1 for i in range(1, n+1) if i % 3 == 0 and i % 5 == 0)
    fizz_count = sum(1 for i in range(1, n+1) if i % 3 == 0 and i % 5 != 0)
    buzz_count = sum(1 for i in range(1, n+1) if i % 3 != 0 and i % 5 == 0)
    other_count = n - fizz_buzz_count - fizz_count - buzz_count
    
    for i in range(1, fizz_buzz_count + 1):
        print("FizzBuzz")
    for i in range(1, fizz_count + 1):
        print("Fizz")
    for i in range(1, buzz_count + 1):
        print("Buzz")
    for i in range(1, other_count + 1):
        print(i)
    
    return fizz_buzz_count + fizz_count + buzz_count + other_count