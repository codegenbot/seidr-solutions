```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    current_index = 0
    while True:
        current_index = text.find(target, current_index)
        if current_index == -1:
            break
        indices.append(current_index)
        current_index += 1

    return indices

# Test the functions
print(gcd(4, 400000))
print(indices_of_substring('This is a test. This is only a test.', 'test'))