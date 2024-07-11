```
n = int(input("Enter an integer: "))
for i in range(1, n+1):
    output = ""
    if i % 15 == 0:
        output = "FizzBuzz"
    elif i % 5 == 0:
        output += "Buzz"
    elif i % 3 == 0:
        output += "Fizz"
    else:
        output = str(i)
    print(output)