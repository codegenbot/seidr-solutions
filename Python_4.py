numbers = input()
if not all(num.isdigit() for num in numbers.strip().split()):
    print("Invalid input.")
else:
    numbers = list(map(int, numbers.split()))