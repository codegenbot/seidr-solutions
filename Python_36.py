def fizz_buzz(n: int):
    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz", end="")
        elif i % 3 == 0:
            print("Fizz", end="")
        elif i % 5 == 0:
            print("Buzz", end="")
        else:
            print(i, end="")
    print()