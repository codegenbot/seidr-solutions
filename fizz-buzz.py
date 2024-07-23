def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        s = "Fizz" if i % 3 == 0 else ""
        s += "Buzz" if i % 5 == 0 and s == "Fizz" else ""
        result.append("FizzBuzz" if s == "" else s or str(i))
    return ''.join(result)