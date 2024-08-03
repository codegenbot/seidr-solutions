def normalize(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

def check(data):
    return normalize(data)

# Test the code
data = [5, 10, 15, 20, 25]
print(check(data))