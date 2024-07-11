from collections import Counter


def search():
    while True:
        print("Please enter a list of numbers separated by space.")
        user_input = input("Enter a list of numbers separated by space: ")
        
        if len(lst) == 0:
            print("No input received. Please enter a valid list of numbers.")
            continue

        try:
            lst = [int(x) for x in user_input.split()]
            max_num = max(set(lst), key=lst.count)
            print(max_num)
            break
        except ValueError:
            print("Invalid input. Please enter a list of numbers separated by space.")
            continue