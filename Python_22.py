from typing import List


def filter_integers(values: List[int]) -> List[int]:
    return [value for value in values if isinstance(value, int)]


def main():
    try:
        values = [int(value) for value in input("Enter a comma-separated list of values: ").strip().split(",")]
        result = filter_integers(values)
        if result:
            print(result)
        else:
            print("No integers found.")
    except ValueError:
        print("Invalid input. Please enter comma-separated integers only.")
        

if __name__ == "__main__":
    main()