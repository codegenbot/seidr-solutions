Here is the solution for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    current_index = 0
    while True:
        index = text.find(target, current_index)
        if index == -1:
            break
        result.append(index)
        current_index = index + 1
    return result

# Testing the functions
print(gcd(1, 1))
print(indices_of_substring("HelloWorldHello", "Hello"))