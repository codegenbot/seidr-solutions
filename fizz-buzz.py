def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        s = ""
        if i % 3 == 0:
            s = "Fizz"
        if i % 5 == 0:
            s += "Buzz" if s == "" else ""
            s = "FizzBuzz" if s == "" else s
        else:  
            s = str(i)
        result.append(s)
    return ''.join(result)