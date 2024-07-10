```
def double_the_difference(lst):
    if lst is None:
        print("Please provide a list of integers")
        return
    result = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return result * 2