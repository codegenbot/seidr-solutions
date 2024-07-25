while True:
    try:
        a, b, c = map(float, input("Enter three space-separated numbers: ").strip().split())
        print(a, b, c)
        break
    except (ValueError, EOFError, TypeError, NameError):
        print("Error: Input format is incorrect. Please provide three space-separated numbers.")