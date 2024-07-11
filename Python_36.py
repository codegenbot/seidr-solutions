```Python
def fizz_buzz(n: int):
    for i in range(1, n+1):
        if i % 3 == 0:
            output = "Fizz"
        else: 
            output = str(i)

        if i % 5 == 0:
            output += "Buzz"

        print(output)

fizz_buzz(int(input("Enter a number: ")))