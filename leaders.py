def find_leaders(vector):
    leaders = []
    for i in range(len(vector)-1):
        if vector[i] >= max(vector[i+1:]):
            leaders.append(vector[i])
    leaders.append(vector[-1])
    return leaders

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)