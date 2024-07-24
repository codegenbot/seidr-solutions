from typing import List


def main():
    values = []
    while True:
        value = input("Enter a string (or 'stop' to finish): ")
        if value.lower() == "stop":
            break
        try:
            if len(value) > 5:
                values.append(value)
            else:
                print(f"The length of {value} is less than or equal to 5. Try again.")
        except ValueError:
            print(
                "Invalid input. Please enter a valid string or type 'stop' to finish."
            )
    filtered_values = filter_strings(values)
    print(filtered_values)


def filter_strings(values: List[str]) -> List[str]:
    return [value for value in values if len(value) > 5]


if __name__ == "__main__":
    main()