```python
def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        out = ""
        if i % 15 == 0:
            out = "FizzBuzz"
            count += 1
        elif i % 3 == 0:
            out += "Fizz"
            if i % 5 == 0:
                out += "Buzz"
                count += (i // 15) * 4 + (i % 15 > 0)
            else:
                count += i // 3
        elif i % 5 == 0:
            out = "Buzz"
            if i % 3 != 0:
                count += i // 5
        print(out)
    
    return count

print(fizz_buzz(100000))