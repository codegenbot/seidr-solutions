def fizz_buzz(n: int):
    output = ""
    for i in range(1, n+1):
        temp_output = ""
        if i % 3 == 0:
            temp_output += "Fizz"
        if i % 5 == 0:
            temp_output += "Buzz"
        temp_output = temp_output or str(i)
        output += temp_output + "\n"
    return output

print(fizz_buzz(int(input("Enter a number: "))))