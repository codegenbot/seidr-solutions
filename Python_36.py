def fizz_buzz(n: int):
    result = []
    count_fizz = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            result.append("FizzBuzz")
        elif i % 3 == 0:
            if "F" not in str(result[-1]):
                result.append("Fizz")
            else:
                count_fizz += 1
        elif i % 5 == 0:
            if "B" not in str(result[-1]):
                result.append("Buzz")
            else:
                count_fizz = 0
        else:
            result.append(str(i))
    while count_fizz > 0:
        result[-1] += "F"
        count_fizz -= 1
    return result