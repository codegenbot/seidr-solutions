def fizz_buzz(x):
    result = []
    for i in range(1,x+1):
        if i % 3 == 0:
            s = "Fizz"
        elif i % 5 == 0:
            s = "Buzz"
        else:
            s = str(i)
        result.append(s)
    return ''.join(result)