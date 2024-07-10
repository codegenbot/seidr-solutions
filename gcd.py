def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            end = i + len(target) - 1
            while True:
                if text[end:].startswith(target):
                    end += len(target)
                else:
                    break
            result.append((start, end))
    return [i[0] for i in result]

# test the functions
print(gcd(1, 1)) 
print(indices_of_substring("HelloWorld", "o"))