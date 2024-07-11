def fizz_buzz(n: int):
    for i in range(1, n+1):
        output = "Fizz" if i % 3 == 0 else ""
        output += "Buzz" if (i % 5 == 0) and output != "Fizz" else ""

        print(output or str(i))

fizz_buzz(int(input("Enter a number: ")))