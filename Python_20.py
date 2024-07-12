while True:
    try:
        numbers = [
            int(x)
            for x in input("Enter numbers separated by commas:").strip().split(",")
        ]
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by commas.")