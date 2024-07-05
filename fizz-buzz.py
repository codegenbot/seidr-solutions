```
def fizz_buzz(x):
    for i in range(1, x+1):
        result = ""
        if i % 3 == 0 and i % 5 == 0:
            result += "FizzBuzz"
        elif i % 5 == 0:
            result += "Buzz"
        elif i % 3 == 0:
            result += "Fizz"
        else:
            result = str(i)
        print(result)