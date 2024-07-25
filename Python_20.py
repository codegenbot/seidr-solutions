for _ in range(5):
    try:
        a, b, c = map(float, input().split())
        print(a, b, c)
    except ValueError:
        print("Error: Input format is incorrect. Please provide three space-separated numbers.")