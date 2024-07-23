def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        s = "FizzBuzz" if i % 15 == 0 else ""
        s += "Buzz" if i % 5 == 0 and not s else ""
        s += "Fizz" if i % 3 == 0 and not s else str(i)
        result.append(s)
    return ''.join(result)