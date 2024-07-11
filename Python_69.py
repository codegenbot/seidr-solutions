```
from collections import Counter

def search():
    user_input = input("Enter a list of numbers separated by space: ")
    if not user_input:
        return "No input provided"
    lst = [int(x) for x in user_input.split()]
    counter = Counter(lst)
    most_common = counter.most_common(1)[0]
    if most_common[1] > 1:
        return max(set(lst), key=lst.count)
    else:
        return most_common[0]

print(search())