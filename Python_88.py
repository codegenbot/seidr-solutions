```
def sort_array(array):
    if len(array) == 0:
        return array
    total = sum(set(array)) # convert to set to remove duplicates and calculate the total
    if total % 2 != 0:
        return sorted(array)
    else:
        return sorted(array, reverse=True)