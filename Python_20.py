try:
    numbers = list(map(float, input("Enter numbers separated by space (e.g. 1.5 -2 3.7): ").split()))
    result = min(numbers, key=lambda x: abs(x))
    print(result)
except:
    print("Invalid input. Please enter valid numbers separated by spaces.")