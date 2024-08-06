Here is the Python code for the problem:

def leaders(arr):
    return [x for i, x in enumerate(reversed(arr)) if all(x >= arr[j] for j in range(i+1, len(arr)))]

# Example usage:
input_arr = list(map(int, input().split()))
print(leaders(input_arr))