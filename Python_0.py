from typing import List


def has_close_elements(numbers_list: List[float], threshold: float) -> bool:
    for i in range(len(numbers_list)):
        for j in range(i + 1, len(numbers_list)):
            if abs(numbers_list[i] - numbers_list[j]) <= threshold:
                return True
    return False


def main():
    while True:
        print("Do you want to run the program? (yes/no): ")
        response = input().lower()
        while response not in ["y", "yes", "n", "no"]:
            print("Invalid input. Please enter 'y' or 'n'.")
            response = input().lower()
        if response in ["y", "yes"]:
            break
        elif response in ["n", "no"]:
            print("Exiting the program.")
            exit(0)

    while True:
        try:
            numbers = input("Enter space-separated float numbers: ")
            numbers_list = list(map(float, numbers.split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid float numbers.")

    while True:
        try:
            threshold = float(input("Enter a threshold value: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid number for the threshold.")

    result = has_close_elements(numbers_list, threshold)

    print(
        "The list contains close elements"
        if result
        else "The list does not contain close elements"
    )


if __name__ == "__main__":
    main()