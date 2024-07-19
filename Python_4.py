numbers = list(map(float, input("Enter four numbers separated by space: ").split()))
if len(numbers) != 4:
    print("Invalid input. Please enter exactly four numbers separated by space.")
else:
    print(sum(numbers))