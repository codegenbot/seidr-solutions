def find_leaders(vector):
    leaders = []
    for i in range(len(vector)):
        if i == len(vector) - 1 or vector[i] >= max(vector[i+1:]):
            leaders.append(vector[i])
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