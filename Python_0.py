from typing import List


def has_close_elements(numbers_list: List[float], threshold: float) -> bool:
    if len(numbers_list) < 2:
        return False
    for i in range(len(numbers_list) - 1):
        for j in range(i + 1, len(numbers_list)):
            if abs(numbers_list[i] - numbers_list[j]) <= threshold:
                return True
    return False


def main():
    while True:
        print("Do you want to run the program? (yes/no): ")
        while True:
            response = input().lower()
            if response in ["y", "yes"]:
                break
            elif response in ["n", "no"]:
                print("Exiting the program.")
                exit(0)
            else:
                print("Invalid input. Please enter 'y' or 'n'.")

        while True:
            while True:
                numbers = input("Enter space-separated float numbers: ")
                if not numbers.strip():
                    print("Please enter some numbers.")
                elif len(numbers.split()) < 2:
                    print("Please enter at least two numbers.")
                else:
                    try:
                        numbers_list = list(map(float, numbers.split()))
                        break
                    except ValueError:
                        print("Invalid input. Please enter valid float numbers.")

            while True:
                while True:
                    threshold_str = input("Enter a threshold value: ")
                    if not threshold_str.strip():
                        print("Please enter a threshold value.")
                    else:
                        try:
                            threshold = float(threshold_str)
                            break
                        except ValueError:
                            print(
                                "Invalid input. Please enter a valid number for the threshold."
                            )

                result = has_close_elements(numbers_list, threshold)

                print(
                    "The list contains close elements"
                    if result
                    else "The list does not contain close elements"
                )
                break

        break


if __name__ == "__main__":
    main()