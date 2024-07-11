```
from collections import Counter


def search():
    while True:
        print("Please enter a list of numbers separated by space.")
        user_input = input("Enter a list of numbers separated by space: ")
        if user_input == "":
            print("No input received.")
            continue
        try:
            lst = [int(x) for x in user_input.split()]
            max_num = max(set(lst), key=lst.count)
            while True:
                response = input(f"Is this correct? ({max_num}): ")
                if response.lower() == "y":
                    break
                elif response.lower() == "n":
                    print("Please enter a list of numbers separated by space.")
                else:
                    print("Invalid input. Please enter 'y' for yes or 'n' for no.")
        except ValueError:
            print("Invalid input. Please enter a list of numbers separated by space.")
            continue