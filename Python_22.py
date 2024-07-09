numbers = input("Enter numbers separated by commas: ")
values = [value.strip() for value in numbers.split(",")]
print(filter_integers(values))