```
def fizz_buzz(n: int):
    """
    Returns a string consisting of numbers from 1 to n, replaced by
    "Fizz" if the number is divisible by 3, "Buzz" if it's divisible by 5,
    and "FizzBuzz" if it's divisible by both. Otherwise, just the number.
    """
    result = []
    for i in range(1, n+1):
        if i % 15 == 0: 
            result.append("FizzBuzz")
        elif i % 3 == 0:
            result.append("Fizz")
        elif i % 5 == 0:
            result.append("Buzz")
        else:
            result.append(str(i))
    return "".join(result)