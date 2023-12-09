def basement(arr):
    
    total = 0

    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i
    
    return -1

input_str = input()
arr = [int(num) for num in input_str.split()]

result = basement(arr)
print(result)