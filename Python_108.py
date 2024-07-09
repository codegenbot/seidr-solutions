```
def count_nums(arr):
    return sum(1 for num in arr if str(num).replace('-', '').isdigit() and int(str(num).replace('-', '')) > 0)