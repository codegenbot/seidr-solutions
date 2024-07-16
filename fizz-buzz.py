def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output = "Fizz"
        else: 
            output = ""

        if i % 5 == 0:
            if not output:
                output = "Buzz"
            else:
                output += "Buzz"

        result.append(output or str(i))
    return result