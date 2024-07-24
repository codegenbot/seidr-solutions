from typing import List, Any


def main():
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == "stop":
            break
        try:
            values.append(int(value))
        except ValueError:
            print(
                "Invalid input. Please enter a valid integer or type 'stop' to finish."
            )
    try:
        filtered_values = [
            str(i)
            for i in set(
                map(int, [value for value in values if isinstance(value, int)])
            )
        ]
    except ValueError:
        print("Invalid input received.")
    print(filtered_values)


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    main()