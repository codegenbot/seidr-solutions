def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    current_index = 0
    while True:
        position = text.find(target, current_index)
        if position == -1:
            break
        result.append(position)
        current_index = position + len(target)
    return result


# Example usage:
a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))