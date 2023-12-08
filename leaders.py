def find_leaders(vector):
    leaders = []
    for i in range(len(vector)):
        if i == len(vector) - 1 or vector[i] >= max(vector[i+1:]):
            leaders.append(vector[i])
    return leaders

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)