from typing import List

def main():
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == "stop":
            break
        while True:
            try:
                values.append(int(value))
                break
            except ValueError:
                print(
                    "Invalid input. Please enter a valid integer or type 'stop' to finish."
                )
                continue

    filtered_values = [value for value in values if isinstance(value, int)]

    print(filtered_values)


if __name__ == "__main__":
    main()