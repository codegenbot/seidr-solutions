def fizz_buzz(n):
    result = ""
    for i in range(1, n+1):
        if i % 15 == 0:
            result += "FizzBuzz "
        elif i % 3 == 0:
            if i % 5 == 0:
                result += "FizzBuzz "
            else:
                result += "Fizz "
        elif i % 5 == 0:
            result += "Buzz "
        else:
            result += str(i) + " "
    return result.strip()