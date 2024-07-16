def calculate_sum():
    n = int(input())
    numbers = list(map(int, input().split()))
    result = sum(numbers)
    return result

try:
    print(calculate_sum())
except:
    print("Invalid input. Please provide valid input.")