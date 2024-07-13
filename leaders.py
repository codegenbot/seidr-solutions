def leaders(arr):
    # This function returns the leaders in a given array
    return [arr[i] for i in range(len(arr)) if all(x <= arr[i] for x in arr[:i+1])]