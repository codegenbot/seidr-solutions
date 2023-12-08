def find_leaders(vector):
    leaders = []
    max_value = 0
    for i in range(len(vector)):
        if vector[i] >= max_value:  
            max_value = vector[i]
            leaders.append(max_value)
    return leaders

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in reversed(result):
    print(num)