```
numbers = input("Enter space-separated numbers: ").split()

filtered_numbers = [num for num in numbers if num.replace('.', '', 1).replace('-', 1).isnumeric()]
if not filtered_numbers:
    print(f"Cannot calculate mean absolute deviation from an empty set of numbers.")
else:
    try:
        print(mean_absolute_deviation(filtered_numbers))
    except ZeroDivisionError as e:
        print(f"Cannot calculate mean absolute deviation. {e}.")
    except ValueError as e:
        print(f"Invalid input. {e}."