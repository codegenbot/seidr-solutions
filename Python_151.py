
import sys
def get_input(prompt):
    if sys.version_info[0] == 3:
        return input(prompt)
    else:
        return raw_input(prompt)
lst = list(map(int, get_input("Enter numbers separated by spaces: ").split()))