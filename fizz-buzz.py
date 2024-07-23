def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        s = ""
        if not (i % 3 or i % 5):  
            s = "FizzBuzz"
        elif i % 3 == 0:  
            s = "Fizz"
        elif i % 5 == 0:  
            s = "Buzz"
        else:
            s = str(i)
        result.append(s)
    return ''.join(result)