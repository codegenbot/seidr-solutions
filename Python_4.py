try:
    numbers = list(map(int, input().split()))
    if all(isinstance(num, int) for num in numbers):
        print(sum(numbers))
    else:
        print("Invalid input. Please enter numbers separated by space.")
except:
    print("Invalid input. Please enter numbers separated by space.")