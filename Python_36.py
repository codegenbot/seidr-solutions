def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        out = ""
        if i % 15 == 0:
            out = "FizzBuzz"
        elif i % 3 == 0:
            out = "Fizz"
        elif i % 5 == 0:
            out = "Buzz"
        
        print(out)
        if out in ["FizzBuzz", "Fizz", "Buzz"]:
            count += 1
    
    return count