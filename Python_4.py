numbers = input("Enter numbers separated by space: ").split()
try:
    numbers = [int(num) for num in numbers]
    # Rest of the code

except ValueError:
    print("Invalid input. Please enter only numbers separated by space.")