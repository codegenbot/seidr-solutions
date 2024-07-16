while True:
    try:
        numbers = input("Enter the numbers separated by space: ").split()
        if not numbers:
            raise ValueError
        numbers = list(map(float, numbers))
        print(sum(numbers))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")