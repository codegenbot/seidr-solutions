```
from collections import Counter


def search():
    while True:
        user_input = input("Enter a list of numbers separated by space or type 'exit' to quit: ")
        if user_input.lower() == "exit":
            print("Exiting the program.")
            return None
        elif user_input == "":
            print("No input received.")
            continue
        try:
            lst = [int(x) for x in user_input.split()]
            counter = Counter(lst)
            max_num, _ = counter.most_common(1)[0]
            return max_num
        except ValueError:
            print("Invalid input. Please enter a list of numbers separated by space.")