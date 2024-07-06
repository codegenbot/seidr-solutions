Here is the modified code:

def my_function():
    total = 0
    for num in range(1,6):
        val = float(input(f"Enter number {num}: "))
        total += val
    print("Average: ", total/5)

import re
def words_string():