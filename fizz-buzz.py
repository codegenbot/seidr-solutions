```
def fizz_buzz(n):
    result = ""
    for i in range(1, n+1):
        result += "FizzBuzz" if i % 15 == 0 else "Fizz" if i % 3 == 0 else "Buzz" if i % 5 == 0 else str(i) + " "
    return result.strip()