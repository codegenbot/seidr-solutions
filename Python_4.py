try:
    numbers = list(
        map(float, input("Enter a list of float numbers separated by spaces: ").split())
    )
except ValueError:
    print("Invalid input. Please enter valid float numbers separated by spaces.")