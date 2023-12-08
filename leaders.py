def find_leaders(vector):
    leaders = []
    max_value = float('-inf')
    for i in range(len(vector)-1, -1, -1):
        if all(vector[i] >= num for num in vector[i+1:]):
            leaders.append(vector[i])
    return leaders[::-1]

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)