while True:
    try:
        a, b, c = map(int, raw_input("Enter three space-separated numbers: ").split())
        print(a, b, c)
        break
    except (ValueError, EOFError):
        print(
            "Error: Input format is incorrect. Please provide three space-separated numbers."
        )