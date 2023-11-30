numbers = input()
if not numbers.replace(" ", "").isdigit():
    print("Invalid input.")
else:
    numbers = list(map(int, numbers.split()))
    # Rest of the code