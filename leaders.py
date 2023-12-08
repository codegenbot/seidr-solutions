def find_leaders(vector):
    leaders = []
    max_value = vector[0]
    leaders.append(max_value)
    for i in range(1, len(vector)):
        if vector[i] >= max_value:
            max_value = vector[i]
            leaders.append(max_value)
    return leaders

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)