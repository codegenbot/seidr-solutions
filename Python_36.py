def fizz_buzz(n: int):
    output_count = 0
    for i in range(1, n + 1):
        output = ""
        if i % 15 == 0:
            output = "FizzBuzz"
            output_count += 1
        elif i % 3 == 0:
            output = "Fizz"
        elif i % 5 == 0:
            output = "Buzz"
        else:
            output = str(i)
        print(output)
    return output_count