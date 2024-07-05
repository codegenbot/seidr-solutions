```
def fizz_buzz(n):
    result = ""
    for i in range(1, n+1):
        if i % 15 == 0:
            result += "FizzBuzz\n"
        elif i % 3 == 0:
            result += "Fizz\n"
        elif i % 5 == 0:
            result += "Buzz\n"
        else:
            result += str(i) + "\n"
    return result