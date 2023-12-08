def find_leaders(vector):
    leaders = []
    max_value = vector[-1]
    for i in range(len(vector)-2, -1, -1):
        if all(vector[j] <= vector[i] for j in range(i+1, len(vector))):
            max_value = vector[i]
            leaders.append(max_value)
    leaders.append(max_value)
    return leaders[::-1]

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)