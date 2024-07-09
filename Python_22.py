```
def filter_integers(values):
    try:
        for value in values:
            int(value)
        return "success"
    except ValueError:
        return "failure"

numbers = input("Enter numbers separated by commas: ")
values = [value.strip() for value in numbers.split(",")]
print(filter_integers(values))