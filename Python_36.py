```
def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz")
            count += 1
        elif i % 3 == 0:
            result = "Fizz"
            if i % 5 == 0: 
                result = "FizzBuzz"  
            print(result)
        else:
            print(i)
    return count