def leaders(vector):
    result = []
    current_leader = vector[-1]
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= current_leader:
            result.append(current_leader)
            current_leader = vector[i]
    return result + [current_leader]

# Test cases
print(leaders([0])) # [0]
print(leaders([1, 0])) # [1, 0]
print(leaders([1, 451])) # [1, 451]
print(leaders([2, 1000, 0])) # [2, 1000, 0]
print(leaders([2, 0, 1000])) # [1, 1000]