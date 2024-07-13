def fizz_buzz(n: int):
    for i in range(1, n + 1):
        output = ""
        if i % 15 == 0:
            output = "FizzBuzz"
        elif i % 3 == 0:
            output = "Fizz"
        elif i % 5 == 0:
            output = "Buzz"
        else:
            output = str(i)
        print(output)
    return n