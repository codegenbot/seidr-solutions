```
def fizz_buzz(n):
    for i in range(1, n + 1):
        out = ""
        if i % 15 == 0:
            out = "FizzBuzz"
        elif i % 5 == 0:
            out = "Buzz"
        elif i % 3 == 0:
            out = "Fizz"
        else:
            out = str(i)
        
        print(out)

    return None