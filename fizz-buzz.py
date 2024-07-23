def fizz_buzz(n):
    s = ""
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            s += "FizzBuzz"
        elif i % 3 == 0:
            s += "Fizz"
        elif i % 5 == 0:
            s += "Buzz"
        else:
            s += str(i)
    return s