from typing import Any, list


def filter_integers() -> list[int]:
    user_input = input("Enter a list of numbers separated by comma or space: ")
    values = [eval(value) for value in user_input.split(",")]
    return [value for value in values if isinstance(value, int)]


filter_integers()