```
def fizz_buzz(n):
    out = []
    for i in range(1, n + 1):
        result = ""
        if i % 15 == 0:
            result = "FizzBuzz"
        elif i % 3 == 0:
            result = "Fizz"
        elif i % 5 == 0:
            result = "Buzz"
        else:
            result = str(i)
        
        out.append(result)
    
    return '\n'.join(out)