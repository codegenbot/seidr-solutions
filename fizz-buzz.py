def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        s = ""
        if i % 15 == 0:  
            s = "FizzBuzz"
        elif i % 3 == 0 and i % 5 != 0:  
            s = "Fizz"
        elif i % 5 == 0 and i % 3 != 0:  
            s = "Buzz"
        else:
            s = str(i)
        result.append(s)
    return ''.join(result)