```
numbers = list(map(int, input("Enter numbers separated by space: ").split()))

if not numbers:
    print("Error: No numbers entered.")
else:
    if any(not isinstance(x, int) for x in numbers):
        print("Error: Non-integer values entered.")
    else:
        even_numbers = [num for num in numbers if num % 2 == 0]
        print(sorted(even_numbers))