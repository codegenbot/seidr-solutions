from typing import List

def filter_integers():
    values = []
    while True:
        try:
            value = int(input("Enter an integer (or 'done' if finished): "))
            values.append(value)
        except ValueError:
            user_input = input("Enter 'done' if you want to finish: ")
            if user_input == 'done':
                break
    return [value for value in set(values)]