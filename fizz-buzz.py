def fizz_buzz(n):
    result = []
    s = ""
    for i in range(1, n+1):
        if i % 15 == 0:
            s = "FizzBuzz"
        elif i % 3 == 0:
            s = "Fizz" if s=="" else s
        elif i % 5 == 0:
            s = "Buzz" if s=="" else s
        result.append(s or str(i))
    return ''.join(result)