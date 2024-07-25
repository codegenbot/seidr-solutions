for _ in range(5):
    try:
        a, b, c = map(float, input().strip().split())
        print(a, b, c)
    except (ValueError, EOFError):
        print("Error: Input format is incorrect. Please provide three space-separated numbers.")