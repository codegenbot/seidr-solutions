```
from typing import List
from collections import OrderedDict

def remove_duplicates():
    numbers = list(dict.fromkeys(map(int, input("Enter numbers separated by space:\n").split())))
    return numbers

print(remove_duplicates())