```
def sort_array(array):
    sorted_array = sorted(array)
    middle_index = len(sorted_array) // 2
    median_first_half = sorted_array[:middle_index]
    median_second_half = sorted_array[middle_index:]
    
    if len(array) % 2 != 0:
        return [sorted_array[middle_index]]
    else:
        return [median_first_half, median_second_half]