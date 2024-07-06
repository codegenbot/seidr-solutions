def fizz_buzz(n):
    for i in range(1, n + 1):
        out = ""
        if i % 15 == 0:
            out = "FizzBuzz"
        elif i % 3 == 0:
            out = "Fizz"
        elif i % 5 == 0:
            out = "Buzz"
        
        print(out)
    
    return sum(1 for _ in range(n) if (_ % 15 == 0))

print(fizz_buzz(100000))