try:
    n = int(input("Enter the number of elements: "))
    numbers = list(map(int, input("Enter the elements separated by spaces: ").split()))
    result = sum(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please provide valid input.")