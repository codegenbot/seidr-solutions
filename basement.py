Here is the completed code:

def basement(vector):
    total = 0
    for i in range(len(vector)):
        total += vector[i]
        if total < 0:
            return i

print(basement([1, -1]))  # 0
print(basement([1, -100]))  # 0
print(basement([2, -1, 100]))  # 0
print(basement([2, -95, 100]))  # 0
print(basement([2, -30, 5]))  # 0