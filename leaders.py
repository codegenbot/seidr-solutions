
def leaders(arr):
   max_val = arr[0]
   result = []
   for i in range(1, len(arr)):
       if arr[i] >= max_val:
           max_val = arr[i]
           result.append(max_val)
    return result