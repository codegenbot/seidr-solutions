def solve():
    try:
        N = int(input("Enter a number: "))
    except ValueError:
        print("Invalid input. Please enter a number.")
        return

    binary = str(bin(N)[2:]).replace("1", "a").replace("0", "b")
    result = ''.join('a' if c == 'b' else 'b' for c in binary)
    print(result)

solve()