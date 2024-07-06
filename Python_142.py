while True:
    try:
        lst = list(map(int, input("Enter numbers separated by space: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")