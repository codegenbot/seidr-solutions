Here is the modified code:

def search(lst):
    max_val = -1
    for num in lst:
        if num > 0 and num > max_val:
            max_val = num
    return max_val