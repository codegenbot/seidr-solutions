def pluck(arr):
    even_values = []
    for i in range(len(arr)):
        if arr[i] % 2 == 0:
            even_values.append(arr[i])
    
    if len(even_values) == 0:
        return []
    
    min_value = min(even_values)
    min_index = arr.index(min_value)
    
    return [min_value, min_index]