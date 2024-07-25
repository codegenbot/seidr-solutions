Here is the solution:

def leaders(arr):
    return [arr[i] for i in range(len(arr)-1, -1, -1) if all(x <= arr[i] for x in arr[i+1:])]

# Example usage:
input_array = list(map(int, input().split()))
print(leaders(input_array))