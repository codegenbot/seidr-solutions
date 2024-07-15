try:
    numbers = list(map(float, input("Enter numbers separated by space (e.g. 1.5 2.3 4.5): ").split()))
    result = find_closest_elements(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")