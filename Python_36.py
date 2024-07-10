def fizz_buzz(n: int):
    result = []
    count_fizzbuzz = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            if count_fizzbuzz == 0:
                result.append("FizzBuzz")
                count_fizzbuzz += 1
        elif i % 3 == 0:
            result.append("Fizz")
        elif i % 5 == 0:
            result.append("Buzz")
        else:
            result.append(str(i))
    return result