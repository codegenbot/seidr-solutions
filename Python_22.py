def main():
    user_input = input("Enter some values (separated by space): ")
    try:
        values = [int(value) for value in user_input.split()]
        filtered_values = list(filter(lambda x: isinstance(x, int), values))
        print(filtered_values)
    except ValueError:
        print("Invalid input. Please enter integers only.")


def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


if __name__ == "__main__":
    main()