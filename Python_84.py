```
def solve(N):
    result = ""
    for i in range(1, N+1):
        if i % 3 == 0 and i % 5 != 0:
            result += "Fizz"
        elif i % 3 != 0 and i % 5 == 0:
            result += "Buzz"
        elif i % 3 == 0 and i % 5 == 0:
            result += "FizzBuzz"
        else:
            result += str(i)
    return result