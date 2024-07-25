try:
    a, b, c = map(int, input().split())
    if len(input().split()) != 3:
        raise ValueError
    print(max(a, b, c))
except ValueError:
    print("Invalid input. Please enter three integers separated by spaces.")