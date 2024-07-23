```python
def fizz_buzz(n: int):
    count = 0
    result = []
    for i in range(1, n + 1):
        if i % 15 == 0:
            result.append("FizzBuzz")
        elif i % 3 == 0:
            result.append("Fizz" if i % 5 != 0 else "FizzBuzz")
        elif i % 5 == 0:
            result.append("Buzz" if i % 3 != 0 else "FizzBuzz")
        else:
            result.append(str(i))
    return len([i for i in result if isinstance(i, str) and i != '0'])