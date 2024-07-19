numbers = []
while True:
    try:
        numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")