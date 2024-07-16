numbers_sum = 0
while True:
    try:
        numbers = list(map(int, input().split()))
        if not numbers:
            break
        numbers_sum += sum(numbers)
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")
print(numbers_sum)