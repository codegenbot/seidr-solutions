def fizz_buzz(n: int):
    fizz_count = 0
    buzz_count = 0
    for i in range(1, n + 1):
        if i % 3 == 0:
            fizz_count += 1
        if i % 5 == 0:
            buzz_count += 1
        return "FizzBuzz" if i % 15 == 0 else ("Fizz" if i % 3 == 0 else ("Buzz" if i % 5 == 0 else str(i)))