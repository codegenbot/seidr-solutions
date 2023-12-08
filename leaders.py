def find_leaders(vector):
    leaders = []
    max_value = vector[-1]
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= max_value:  
            max_value = vector[i]
            leaders.insert(0, max_value)
    return leaders

vector = [936, 879, 20, 7, 147, 176, 488, 116, 921, 237, 563, 95, 933, 819, 138, 936, 545, 874, 210, 683, 17, 140, 879]
result = find_leaders(vector)
for num in result:
    print(num)