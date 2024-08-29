Here is the Python solution for the problem:

def leaders(arr):
    return [arr[i] for i in range(len(arr)-1,-1,-1) if all(x <= arr[i] for x in arr[i+1:])]

# Do not remove this line
if __name__ == "main":
    input_str = input()
    array = list(map(int, input_str.split()))
    print(*leaders(array), sep='\n')