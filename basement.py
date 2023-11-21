def basement(arr):
    sum_so_far = 0
    for i in range(len(arr)):
        sum_so_far += arr[i]
        if sum_so_far < 0:
            return i
    return -1

input_str = input()
arr = list(map(int, input_str.split()))

print(basement(arr))