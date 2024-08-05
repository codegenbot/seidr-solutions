def increment_list(l):
    return [num + 1 for num in l]

# Input reading
l = [int(x) for x in input().split()]
# Function call
result = increment_list(l)
print(result)