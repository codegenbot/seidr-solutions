while True:
    try:
        a, b, c = map(int, input("Enter three space-separated numbers: ").split())
        if len([a, b, c]) != 3:
            raise ValueError
        print(a, b, c)
        break
    except (ValueError, EOFError):
        print("Error: Input format is incorrect. Please provide exactly three space-separated numbers.")