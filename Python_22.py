def filter_integers(values):
    try:
        return [int(value) for value in values]
    except ValueError:
        return "Error: Non-integer values entered."

numbers = input("Enter numbers separated by commas: ")
values = [value.strip() for value in numbers.split(",")]
print(filter_integers(values))