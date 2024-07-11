from typing import List


def get_values() -> List[int]:
    result = []
    while True:
        values = input("Enter some values (separated by space): ")
        for value in values.split():
            if value.isdigit():
                result.append(int(value))
            else:
                print(f"Invalid input: {value}. Please enter integers only.")
        if all(val.isdigit() for val in values.split()):
            break
    return result


def filter_integers() -> List[int]:
    result = get_values()
    return [int(value) for value in result]