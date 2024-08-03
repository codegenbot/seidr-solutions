def find_leaders(arr):
    leaders = []
    max_right = float("-inf")
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    leaders.reverse()
    return leaders


# Read input from user
n = int(input())
arr = list(map(int, input().split()))

# Get the leaders
result = find_leaders(arr)

# Print the output
for num in result:
    print(num, end=" ")