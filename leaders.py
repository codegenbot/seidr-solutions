def find_leaders(vector):
    num_of_elements = len(vector)
    leaders = [vector[num_of_elements - 1]]
    max_value = vector[num_of_elements - 1]
    for i in range(num_of_elements - 2, -1, -1):
        if vector[i] >= max_value:
            max_value = vector[i]
            leaders.append(max_value)
    return leaders[::-1]

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)