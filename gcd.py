def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_index = i
            end_index = start_index + len(target) - 1
            while True:
                if text[end_index:].startswith(target):
                    result.append(start_index)
                    break
                end_index += 1
    return result