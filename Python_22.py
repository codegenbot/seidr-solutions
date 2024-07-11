```
from typing import Any

def calculate_average_value(values: list[Any]) -> float:
    if not values:
        return 0
    average = sum(filter_integers(values)) / len(values)
    return round(average, 2)


def filter_integers(lst: list[int]) -> list[int]:
    return [x for x in lst if isinstance(x, int)]


user_input = input("Please enter some values (separated by spaces): ")
try:
    values = [int(x) for x in user_input.split()]
except ValueError as e:
    print(f"Invalid input: {e}")
    values = []
if values:
    average_value = calculate_average_value(values)
    print(f"The average value is {average_value}.")