def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz")
            count += 1
        elif i % 3 == 0:
            print("Fizz" if i % 5 != 0 else "FizzBuzz")
            count = 0 if i % 15 == 0 else count + 1
        elif i % 5 == 0:
            print("Buzz")
            count += 1 if i % 3 == 0 or i % 15 == 0 else 0
        else:
            print(i)
    return count