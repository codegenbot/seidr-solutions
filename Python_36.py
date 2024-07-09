def fizz_buzz(n: int):
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
        elif i % 13 == 0 and "7" in str(i):
            print(str(i))
        else:
            print(i)