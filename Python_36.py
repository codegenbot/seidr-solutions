```
def fizz_buzz(n):
    count = 0
    out = ""
    for i in range(1, n + 1):
        if i % 15 == 0:
            out = "FizzBuzz"
        elif i % 3 == 0:
            out = "Fizz"
        elif i % 5 == 0:
            out = "Buzz"
        else:
            out = str(i)
        
        print(out)
        count += 1
    
    return count

print(fizz_buzz(100000))