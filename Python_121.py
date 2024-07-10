import re


def sum_of_odd_numbers_in_every_other_element():
    while True:
        try:
            input_str = input(
                "Enter the elements of a list separated by space: (or 'q' to quit) "
            )
            if input_str.lower() == "q":
                break
            numbers = list(map(int, re.sub("[^0-9\s]", "", input_str).split()))
            if not numbers:
                raise ValueError
        except ValueError:
            print("Invalid input. Please try again.")
            continue
        except Exception as e:
            print(f"An error occurred: {e}")
    return sum(i for i in numbers[1::2] if i % 2 != 0)


def main():
    while True:
        result = sum_of_odd_numbers_in_every_other_element()
        print(f"The sum of odd numbers is {result}")
        cont = input("Do you want to continue? (yes/no): ")
        if cont.lower() != "yes":
            break


if __name__ == "__main__":
    main()