from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    while True:
        print("Enter comma-separated integers: ")
        numbers = input().strip()
        if not numbers or numbers == ",":
            print("No input entered.")
        else:
            while True:
                try:
                    numbers_list = [int(num) for num in numbers.split(",") if num]
                    print(remove_duplicates(numbers_list))
                    cont = input("Do you want to continue? (y/n): ")
                    if cont.lower() != "y":
                        break
                    else:
                        continue
                except ValueError as e:
                    print(
                        f"Invalid input. {str(e)}. Please enter comma-separated integers."
                    )
                    numbers = input().strip()