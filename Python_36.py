```
def fizz_buzz(n: int):
    result = ["" for _ in range(n)]
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            result[i-1] = "FizzBuzz"
        elif i % 3 == 0:
            result[i-1] = "Fizz"
        elif i % 5 == 0:
            result[i-1] = "Buzz"
    return str(result.count("FizzBuzz") + result.count("Fizz")*3 + result.count("Buzz")*5 - 15)