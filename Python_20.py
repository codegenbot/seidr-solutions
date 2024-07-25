while True:
    try:
        line = input()
        if not line:
            break
        numbers = list(map(float, line.split()))
        print(numbers)
    except ValueError:
        print(
            "Error: Input format is incorrect. Please provide space-separated numbers."
        )