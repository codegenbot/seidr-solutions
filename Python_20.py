def find_min_max(numbers):
    return min(numbers), max(numbers)


try:
    numbers = list(map(float, input("Enter space-separated numbers: ").strip().split()))
    result = find_min_max(numbers)
    print(result)
except:
    print("Invalid input. Please enter space-separated numbers.")