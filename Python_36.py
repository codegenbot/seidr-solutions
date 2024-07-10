def fizz_buzz(n: int):
    for i in range(1, n+1):
        result = ""
        if i % 3 == 0:
            result += "Fizz"
        if i % 5 == 0:
            result += "Buzz"
        print(result or str(i))