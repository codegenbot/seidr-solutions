def find_leaders(vector):
    leaders = []
    max_value = float('-inf')
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= max_value:
            max_value = vector[i]
            leaders.insert(0, max_value)
    leaders.append(vector[-1])
    return leaders

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)