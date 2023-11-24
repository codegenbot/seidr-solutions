def find_leaders(vector):
    leaders = []
    n = len(vector)
    max_right = vector[n-1]
    leaders.append(max_right)
    
    for i in range(n-2, -1, -1):
        if vector[i] >= max_right:
            leaders.append(vector[i])
            max_right = vector[i]
    
    leaders.reverse()
    return leaders

# Read input from user
n = int(input())
vector = []
for _ in range(n):
    vector.append(int(input()))

# Call the function and print the result
result = find_leaders(vector)
for num in result:
    print(num)