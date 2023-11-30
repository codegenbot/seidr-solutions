numbers = input().split()
try:
    numbers = [int(num) for num in numbers]
    # Rest of the code

except ValueError:
    print("Invalid input.")