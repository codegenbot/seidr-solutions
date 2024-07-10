def pluck(arr):
    smallest_even = float('inf')
    smallest_even_index = float('inf')
    
    for i in range(len(arr)):
        if arr[i] % 2 == 0 and arr[i] < smallest_even:
            smallest_even = arr[i]
            smallest_even_index = i
    
    if smallest_even == float('inf'):
        return []
    else:
        return [smallest_even, smallest_even_index]