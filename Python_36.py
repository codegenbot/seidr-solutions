def fizz_buzz(n: int):
    fizz_count = 0
    buzz_count = 0
    for i in range(1, n + 1):
        if i % 3 == 0:
            fizz_count += 1
        if i % 5 == 0:
            buzz_count += 1
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
        elif i % 3 == 0:
            print("Fizz")
        elif i % 5 == 0:
            print("Buzz")
        else:
            print(i)