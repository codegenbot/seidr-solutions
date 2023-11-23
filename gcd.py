def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


a, b = map(int, input().split())

result = gcd(a, b)
print(result)

input_data = input().split()
text = input_data[0]
target = input_data[1]

indices_result = indices_of_substring(text, target)
print(indices_result)