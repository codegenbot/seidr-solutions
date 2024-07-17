Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start_index = 0
    while True:
        index = text.find(target, start_index)
        if index == -1:
            break
        result.append(index)
        start_index = index + 1
    return result

# test cases
print(gcd(1, 1)) 
print(indices_of_substring("banana", "ana"))