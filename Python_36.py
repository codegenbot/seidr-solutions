def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        out = ""
        if i % 15 == 0:
            out = "FizzBuzz"
            count += 1
        elif i % 3 == 0 and i % 5 != 0:
            out = "Fizz"
            count += 1
        elif i % 5 == 0 and i % 3 != 0:
            out = "Buzz"
            count += 1
        
        print(out)
    
    return count

print(fizz_buzz(100000))