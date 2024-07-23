def fizz_buzz(n: int):
    count = 0
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz" if output else "Buzz"
        print(output or str(i))
        count += 1
    return count