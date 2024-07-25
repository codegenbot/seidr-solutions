while True:
    try:
        numbers = list(map(float, input().split()))
        print(numbers)
    except ValueError:
        print(
            "Error: Input format is incorrect. Please provide space-separated numbers."
        )
    except EOFError:
        break