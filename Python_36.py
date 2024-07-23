def fizz_buzz(n: int):
    result = 0
    for i in range(1, n + 1):
        if i % 3 == 0:
            if i % 5 == 0:
                result += "FizzBuzz".count('3') - "FizzBuzz".count('6')
            else:
                result += str(i).count('3') - str(i).count('6')
        elif i % 5 == 0:
            result += "Buzz".count('5') - "Buzz".count('50')
    return result