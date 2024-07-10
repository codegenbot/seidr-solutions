def fizz_buzz(n: int):
    count_FizzBuzz = 0
    count_Fizz = 0
    count_Buzz = 0
    
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            count_FizzBuzz += 1
        elif i % 3 == 0:
            count_Fizz += 1
        elif i % 5 == 0:
            count_Buzz += 1
        else:
            pass
    
    return (count_FizzBuzz, count_Fizz, count_Buzz)