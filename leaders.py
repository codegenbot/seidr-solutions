Here is the Python solution:

def leaders(a):
    return [a[i] for i in range(len(a)-1,-1,-1) if all(x<=a[i] for x in a[i+1:])]

# Example usage:
input_list = list(map(int, input().split()))
print(leaders(input_list))