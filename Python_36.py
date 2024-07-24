```
def fizz_buzz(n: int):
    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz")
            result = "FizzBuzz"
        elif i % 3 == 0 and i % 5 != 0:
            print("Fizz")
            result = "Fizz"
        elif i % 5 == 0:
            print("Buzz")
            result = "Buzz"
        else:
            print(i)
            result = str(i)

    return n