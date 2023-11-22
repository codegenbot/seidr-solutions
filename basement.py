def basement(arr):
    prefix_sum = 0
    for i in range(len(arr)):
        prefix_sum += arr[i]
        if prefix_sum < 0:
            return i
    return -1


# Read input from user
n = int(input())
arr = list(map(int, input().split()))

# Call the basement function
result = basement(arr)

# Print the result
print(result)