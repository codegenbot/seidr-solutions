```
from collections import Counter

def search():
    while True:
        try:
            user_input = input("Enter a list of numbers separated by space: ")
            lst = [int(x) for x in user_input.split()]
            counter = Counter(lst)
            most_common = counter.most_common(1)[0]
            return most_common[0]
        except ValueError:
            print("Invalid input. Please enter a list of numbers separated by space.")

print(search())