```
def sort_even(numbers):
    return sorted([num for num in numbers if num % 2 == 0])

numbers = []

while True:
    user_input = input("Enter even and odd numbers separated by space, or 'q' to quit: ")
    
    if user_input.lower() == 'q':
        break
    
    try:
        numbers.extend(map(int, user_input.split()))
    except ValueError:
        print("Error: Invalid input. Please enter even and odd numbers separated by space.")
        continue

if not numbers:
    print("Error: No numbers entered.")
elif any(not isinstance(x, int) for x in numbers):
    print("Error: Non-integer values entered.")
else:
    print(sort_even(numbers))