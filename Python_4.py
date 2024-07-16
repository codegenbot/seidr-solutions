try:
    n = int(input())
    numbers = list(map(int, input().split()))
    result = sum(numbers)
    print(result)
except:
    print("Invalid input. Please provide valid input.")