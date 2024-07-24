import sys


def main():
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == "stop":
            break
        values.append(int(value))

    filtered_values = filter_integers(values)

    print(filtered_values)


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    main()