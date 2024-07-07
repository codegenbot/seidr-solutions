Here is the Python solution for the problem:

def leaders(arr):
    return [arr[i] for i in range(len(arr)-1, -1, -1) if all(x <= arr[i] for x in arr[i+1:])]

# Example usage:
input_arr = list(map(int, input().split()))
print(leaders(input_arr))