def solve():
    N = int(input("Enter a number: "))
    binary = convert_to_binary(N)
    if len(binary) % 2 == 0:
        return "Even"
    else:
        return "Odd"


print(solve())