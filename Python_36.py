def fizz_buzz(n: int):
    fizz_count = 0
    buzz_count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz")
            fizz_count += 1
        elif i % 5 == 0:
            print("Buzz")
            buzz_count += 1
        elif i % 3 == 0:
            print("Fizz")
            fizz_count += 1
        else:
            print(i)
    return fizz_count + buzz_count