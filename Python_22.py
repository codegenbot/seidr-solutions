```
def calculate_average_value(values: list[Any]) -> float:
    if not values:
        return 0
    return sum(filter_integers(values)) / len(values)


user_input = input("Please enter some values (separated by spaces): ")
try:
    values = [int(x) for x in user_input.split()]
except ValueError as e:
    print(f"Invalid input: {e}")
    values = []
if values:
    average_value = calculate_average_value(values)
    print(f"The average value is {average_value:.2f}.")