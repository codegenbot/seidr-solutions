while True:
    try:
        x, y = map(
            int, input("Enter two integers separated by a space: ").strip().split()
        )
        result = x * y
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter two integers separated by a space.")