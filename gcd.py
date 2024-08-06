Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_index = i
            end_index = i + len(target) - 1
            while True:
                if text[start_index:end_index+1].endswith(target):
                    result.append(start_index)
                    break
                start_index += 1
    return result