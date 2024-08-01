```
def by_length(arr):
    sorted_arr = sorted([i for i in arr if 1 <= i <= 9])
    reversed_arr = sorted_arr[::-1]
    return [name for num in reversed_arr for name in ['One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine'] if num == int(name.split()[0])]