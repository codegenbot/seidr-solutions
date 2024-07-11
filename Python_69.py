from collections import Counter


def search():
    max_num = None
    while True:
        user_input = input("Enter a list of numbers separated by space: ")
        if user_input == "":
            print("No input received.")
            continue
        try:
            lst = [int(x) for x in user_input.split()]
            counter = Counter(lst)
            num, _ = counter.most_common(1)[0]
            max_num = num
        except ValueError:
            print("Invalid input. Please enter a list of numbers separated by space.")
    return max_num