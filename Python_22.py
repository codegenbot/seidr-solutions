```
from typing import List

def get_names() -> List[str]:
    names = []

    while True:
        num_names = int(input("Enter the number of names (or 0 to finish): "))

        if num_names == 0:
            break

        for _ in range(num_names):
            first_name = input("Enter your first name: ")
            last_name = input("Enter your last name: ")
            print(f"{first_name} {last_name}")

    return [f"{first_name} {last_name}" for first_name, last_name in zip(*[input("Enter your first name: "), input("Enter your last name: ")] * num_names))