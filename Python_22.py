from typing import List


def filter_integers() -> List[int]:
    while True:
        try:
            values = eval(input("Enter a list: "))
            if values is not None and isinstance(values, (list, tuple)):
                return [value for value in values if isinstance(value, int)]
            else:
                print("Invalid input. Please enter a list of integers or any other valid Python expression.")
        except Exception as e:
            print(f"Error: {e}")


if __name__ == "__main__":
    filter_integers()