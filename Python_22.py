from typing import List, Any

def filter_integers() -> None:
    values = input("Enter a list of integers and strings (separated by spaces): ")
    values = [value for value in map(str, values.split()) if value.isdigit()]
    print('The filtered list of integers is: ', values)

filter_integers()