def find_leaders(vector):
    leaders = []
    n = len(vector)
    max_right = vector[n-1]
    leaders.append(max_right)
    
    for i in range(n-2, -1, -1):
        if vector[i] >= max_right:
            max_right = vector[i]
            leaders.append(max_right)
    
    return leaders

# Read input from user
n = int(input())
vector = []
for _ in range(n):
    vector.append(int(input()))

# Find leaders in the vector
result = find_leaders(vector)

# Print the leaders
for leader in result:
    print(leader)