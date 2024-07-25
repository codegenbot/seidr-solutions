from typing import List


def filter_integers() -> List[int]:
    values = []
    while len(input("Are you done? (yes/no): ").lower()) != 'yes':
        try:
            value = input(
                "Enter an integer (space-separated) or type 'done' to finish: "
            ).split()
            if value[0].lower() == "done":
                break
            values.extend([int(i) for i in value])
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces or 'done'.")
    return values