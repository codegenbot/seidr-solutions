```Python
def get_input():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    return lst

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2

# Usage:
input_lst = get_input()
result = double_the_difference(input_lst)
print(result)