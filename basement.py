def get_negative_sum_index(arr):
current_sum = 0
for i in range(len(arr)):
    current_sum += arr[i]
    if current_sum < 0 and (i == 0 or arr[i-1] < 0):
        return i
return -1