def pluck(arr):
    smallest_even_value = float('inf')
    smallest_index = float('inf')
    
    for i in range(len(arr)):
        if arr[i] % 2 == 0 and arr[i] < smallest_even_value:
            smallest_even_value = arr[i]
            smallest_index = i
    
    if smallest_even_value == float('inf'):
        return []
    
    return [smallest_even_value, smallest_index]