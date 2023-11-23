while True:
    try:
        x, y = map(int, input().split())
        if len(input().split()) != 2:
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter two integers separated by a space.")

print(x + y)